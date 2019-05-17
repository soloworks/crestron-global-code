# Script to compile all modules found in SIMPLPlusModules folder
# Example:
# "C:\Program Files (x86)\Crestron\Simpl\SPlusCC.exe" \rebuild "c:\Users\samsh\OneDrive\Documents\GitHub\crestron-global-code\SIMPLPlusModules\CiscoVCCore.usp"  \target series2 series3
#
Write-Host "Starting Compiler Script"
# Set Compiler Path
$SPlusCC = "C:\Program Files (x86)\Crestron\Simpl\SPlusCC.exe"

# Loop through all .usp files in modules folder
Get-ChildItem (Resolve-Path -Path ".\SIMPLPlusModules\").Path -Filter *.usp | 
Foreach-Object {
    
    Write-Host "Processing Module `"$($_.Name)`""

    $pinfo = New-Object System.Diagnostics.ProcessStartInfo
    $pinfo.FileName = $SPlusCC
    $pinfo.RedirectStandardError = $true
    $pinfo.RedirectStandardOutput = $true
    $pinfo.UseShellExecute = $false
    $pinfo.Arguments = "\rebuild `"$($_.FullName)`" \target series2 series3"
    $p = New-Object System.Diagnostics.Process
    $p.StartInfo = $pinfo

    Write-Host "Calling Compiler:"
    Write-Host "EXE: $($SPlusCC)"
    Write-Host "ARG: $($pinfo.Arguments)"
    $p.Start() | Out-Null
    $p.WaitForExit()
    
    $stdout = $p.StandardOutput.ReadToEnd()
    $stderr = $p.StandardError.ReadToEnd()

    if($p.ExitCode -eq 0){
        $Duration = New-TimeSpan -Start $p.StartTime -End $p.ExitTime
        Write-Host "Success ($($Duration.Seconds)s)"
        Write-Host "stdout: $stdout"
    }else{
        Write-Host "Error (ExitCode:$($p.ExitCode))"
        Write-Host "stderr: $stderr"
        Exit 1
    }
}
Exit 0