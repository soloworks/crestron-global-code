# Script to compile all modules found in SIMPLPlusModules folder
# Example:
# "C:\Program Files (x86)\Crestron\Simpl\SPlusCC.exe" \rebuild "c:\Users\samsh\OneDrive\Documents\GitHub\crestron-global-code\SIMPLPlusModules\CiscoVCCore.usp"  \target series2 series3
#

# Set Compiler Path
$SPlusCC = "C:\Program Files (x86)\Crestron\Simpl\SPlusCC.exe"

# Loop through all .usp files in modules folder
Get-ChildItem (Resolve-Path -Path ".\SIMPLPlusModules\").Path -Filter *Pearl.usp | 
Foreach-Object {
    $Arguments = New-Object System.Collections.ArrayList
    $Arguments.Add("\rebuild `"$($_.FullName)`"") > $null
    $Arguments.Add("\target series2 series3") > $null
    Write-Host -NoNewline "Compiling $($_.Name)..."
    $Process = Start-Process -FilePath $SPlusCC -ArgumentList $Arguments -Wait -PassThru
    if($Process.ExitCode -eq 0){
        $Duration = New-TimeSpan -Start $Process.StartTime -End $Process.ExitTime
        Write-Host "Success ($($Duration.Seconds)s)"
    }else{
        Write-Host "Error"
        Exit 1
    }
}
Exit 0