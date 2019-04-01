using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using System.Threading;
using System.Linq;
using Crestron;
using Crestron.Logos.SplusLibrary;
using Crestron.Logos.SplusObjects;
using Crestron.SimplSharp;

namespace UserModule_CISCOVC
{
    public class UserModuleClass_CISCOVC : SplusObject
    {
        static CCriticalSection g_criticalSection = new CCriticalSection();
        
        
        
        Crestron.Logos.SplusObjects.DigitalInput DEBUG;
        Crestron.Logos.SplusObjects.DigitalInput INITCOMMS;
        Crestron.Logos.SplusObjects.DigitalInput WAKE;
        Crestron.Logos.SplusObjects.DigitalInput SLEEP;
        Crestron.Logos.SplusObjects.BufferInput RX;
        Crestron.Logos.SplusObjects.DigitalOutput WAKE_FB;
        Crestron.Logos.SplusObjects.DigitalOutput SLEEP_FB;
        Crestron.Logos.SplusObjects.StringOutput UI_EVENT_PRESSED;
        Crestron.Logos.SplusObjects.StringOutput UI_EVENT_RELEASED;
        Crestron.Logos.SplusObjects.StringOutput UI_EVENT_CLICK;
        Crestron.Logos.SplusObjects.StringOutput UI_EVENT_CHANGED;
        Crestron.Logos.SplusObjects.StringOutput TX;
        private void FNDEBUG (  SplusExecutionContext __context__, CrestronString MSG , CrestronString DETAIL ) 
            { 
            
            __context__.SourceCodeLine = 137;
            Trace( "CiscoSX: [{0}] [{1}]", MSG , DETAIL ) ; 
            
            }
            
        private void FNINITCOMMS (  SplusExecutionContext __context__ ) 
            { 
            
            __context__.SourceCodeLine = 141;
            CreateWait ( "WAITINIT" , 200 , WAITINIT_Callback ) ;
            
            }
            
        public void WAITINIT_CallbackFn( object stateInfo )
        {
        
            try
            {
                Wait __LocalWait__ = (Wait)stateInfo;
                SplusExecutionContext __context__ = SplusThreadStartCode(__LocalWait__);
                __LocalWait__.RemoveFromList();
                
            
            __context__.SourceCodeLine = 142;
            TX  .UpdateValue ( "xfeedback register /event/userinterface/extensions/event\r\n"  ) ; 
            
        
        
            }
            catch(Exception e) { ObjectCatchHandler(e); }
            finally { ObjectFinallyHandler(); }
            
        }
        
    object INITCOMMS_OnPush_0 ( Object __EventInfo__ )
    
        { 
        Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
        try
        {
            SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
            
            __context__.SourceCodeLine = 151;
            TX  .UpdateValue ( "xfeedback register /event/userinterface/extensions/event\r\n"  ) ; 
            __context__.SourceCodeLine = 152;
            TX  .UpdateValue ( "xfeedback register /Status/Standby\r\n"  ) ; 
            
            
        }
        catch(Exception e) { ObjectCatchHandler(e); }
        finally { ObjectFinallyHandler( __SignalEventArg__ ); }
        return this;
        
    }
    
object RX_OnChange_1 ( Object __EventInfo__ )

    { 
    Crestron.Logos.SplusObjects.SignalEventArgs __SignalEventArg__ = (Crestron.Logos.SplusObjects.SignalEventArgs)__EventInfo__;
    try
    {
        SplusExecutionContext __context__ = SplusThreadStartCode(__SignalEventArg__);
        CrestronString LINE;
        LINE  = new CrestronString( Crestron.Logos.SplusObjects.CrestronStringEncoding.eEncodingASCII, 250, this );
        
        CrestronString CHUNK;
        CHUNK  = new CrestronString( Crestron.Logos.SplusObjects.CrestronStringEncoding.eEncodingASCII, 250, this );
        
        
        __context__.SourceCodeLine = 158;
        Trace( "[{0}]", RX ) ; 
        __context__.SourceCodeLine = 160;
        while ( Functions.TestForTrue  ( ( Functions.BoolToInt ( Functions.Find( "\r\n" , RX ) > 0 ))  ) ) 
            { 
            __context__.SourceCodeLine = 161;
            LINE  .UpdateValue ( Functions.Remove ( "\r\n" , RX )  ) ; 
            __context__.SourceCodeLine = 162;
            LINE  .UpdateValue ( Functions.Left ( LINE ,  (int) ( (Functions.Length( LINE ) - 2) ) )  ) ; 
            __context__.SourceCodeLine = 163;
            FNDEBUG (  __context__ , "Line", LINE) ; 
            __context__.SourceCodeLine = 164;
            CHUNK  .UpdateValue ( Functions.Remove ( " " , LINE )  ) ; 
            __context__.SourceCodeLine = 165;
            CHUNK  .UpdateValue ( Functions.Left ( CHUNK ,  (int) ( (Functions.Length( CHUNK ) - 1) ) )  ) ; 
            __context__.SourceCodeLine = 166;
            FNDEBUG (  __context__ , "Chunk", CHUNK) ; 
            __context__.SourceCodeLine = 167;
            if ( Functions.TestForTrue  ( ( Functions.BoolToInt (CHUNK == "**"))  ) ) 
                { 
                __context__.SourceCodeLine = 168;
                FNDEBUG (  __context__ , "FB", "Misc") ; 
                } 
            
            else 
                {
                __context__.SourceCodeLine = 170;
                if ( Functions.TestForTrue  ( ( Functions.BoolToInt (CHUNK == "*e"))  ) ) 
                    { 
                    __context__.SourceCodeLine = 171;
                    FNDEBUG (  __context__ , "FB", "Event") ; 
                    __context__.SourceCodeLine = 172;
                    CHUNK  .UpdateValue ( Functions.Remove ( " " , LINE )  ) ; 
                    __context__.SourceCodeLine = 173;
                    CHUNK  .UpdateValue ( Functions.Left ( CHUNK ,  (int) ( (Functions.Length( CHUNK ) - 1) ) )  ) ; 
                    __context__.SourceCodeLine = 174;
                    if ( Functions.TestForTrue  ( ( Functions.BoolToInt (CHUNK == "UserInterface"))  ) ) 
                        { 
                        __context__.SourceCodeLine = 175;
                        FNDEBUG (  __context__ , "FB", "UserInterface") ; 
                        __context__.SourceCodeLine = 176;
                        CHUNK  .UpdateValue ( Functions.Remove ( " " , LINE )  ) ; 
                        __context__.SourceCodeLine = 177;
                        CHUNK  .UpdateValue ( Functions.Left ( CHUNK ,  (int) ( (Functions.Length( CHUNK ) - 1) ) )  ) ; 
                        __context__.SourceCodeLine = 178;
                        if ( Functions.TestForTrue  ( ( Functions.BoolToInt (CHUNK == "Extensions"))  ) ) 
                            { 
                            __context__.SourceCodeLine = 179;
                            FNDEBUG (  __context__ , "FB", "Extensions") ; 
                            __context__.SourceCodeLine = 180;
                            CHUNK  .UpdateValue ( Functions.Remove ( " " , LINE )  ) ; 
                            __context__.SourceCodeLine = 181;
                            CHUNK  .UpdateValue ( Functions.Left ( CHUNK ,  (int) ( (Functions.Length( CHUNK ) - 1) ) )  ) ; 
                            __context__.SourceCodeLine = 182;
                            if ( Functions.TestForTrue  ( ( Functions.BoolToInt (CHUNK == "Event"))  ) ) 
                                { 
                                __context__.SourceCodeLine = 183;
                                FNDEBUG (  __context__ , "FB", "Event") ; 
                                __context__.SourceCodeLine = 184;
                                CHUNK  .UpdateValue ( Functions.Remove ( " " , LINE )  ) ; 
                                __context__.SourceCodeLine = 185;
                                CHUNK  .UpdateValue ( Functions.Left ( CHUNK ,  (int) ( (Functions.Length( CHUNK ) - 1) ) )  ) ; 
                                __context__.SourceCodeLine = 186;
                                if ( Functions.TestForTrue  ( ( Functions.BoolToInt (CHUNK == "Clicked"))  ) ) 
                                    { 
                                    __context__.SourceCodeLine = 187;
                                    FNDEBUG (  __context__ , "FB", "Clicked") ; 
                                    __context__.SourceCodeLine = 188;
                                    CHUNK  .UpdateValue ( Functions.Remove ( " " , LINE )  ) ; 
                                    __context__.SourceCodeLine = 189;
                                    CHUNK  .UpdateValue ( Functions.Left ( CHUNK ,  (int) ( (Functions.Length( CHUNK ) - 1) ) )  ) ; 
                                    __context__.SourceCodeLine = 190;
                                    if ( Functions.TestForTrue  ( ( Functions.BoolToInt (CHUNK == "Signal:"))  ) ) 
                                        { 
                                        __context__.SourceCodeLine = 191;
                                        FNDEBUG (  __context__ , "FB", "Signal") ; 
                                        __context__.SourceCodeLine = 192;
                                        UI_EVENT_CLICK  .UpdateValue ( LINE  ) ; 
                                        } 
                                    
                                    } 
                                
                                else 
                                    {
                                    __context__.SourceCodeLine = 195;
                                    if ( Functions.TestForTrue  ( ( Functions.BoolToInt (CHUNK == "Pressed"))  ) ) 
                                        { 
                                        __context__.SourceCodeLine = 196;
                                        FNDEBUG (  __context__ , "FB", "Pressed") ; 
                                        __context__.SourceCodeLine = 197;
                                        CHUNK  .UpdateValue ( Functions.Remove ( " " , LINE )  ) ; 
                                        __context__.SourceCodeLine = 198;
                                        CHUNK  .UpdateValue ( Functions.Left ( CHUNK ,  (int) ( (Functions.Length( CHUNK ) - 1) ) )  ) ; 
                                        __context__.SourceCodeLine = 199;
                                        if ( Functions.TestForTrue  ( ( Functions.BoolToInt (CHUNK == "Signal:"))  ) ) 
                                            { 
                                            __context__.SourceCodeLine = 200;
                                            FNDEBUG (  __context__ , "FB", "Signal") ; 
                                            __context__.SourceCodeLine = 201;
                                            UI_EVENT_PRESSED  .UpdateValue ( LINE  ) ; 
                                            } 
                                        
                                        } 
                                    
                                    else 
                                        {
                                        __context__.SourceCodeLine = 204;
                                        if ( Functions.TestForTrue  ( ( Functions.BoolToInt (CHUNK == "Released"))  ) ) 
                                            { 
                                            __context__.SourceCodeLine = 205;
                                            FNDEBUG (  __context__ , "FB", "Released") ; 
                                            __context__.SourceCodeLine = 206;
                                            CHUNK  .UpdateValue ( Functions.Remove ( " " , LINE )  ) ; 
                                            __context__.SourceCodeLine = 207;
                                            CHUNK  .UpdateValue ( Functions.Left ( CHUNK ,  (int) ( (Functions.Length( CHUNK ) - 1) ) )  ) ; 
                                            __context__.SourceCodeLine = 208;
                                            if ( Functions.TestForTrue  ( ( Functions.BoolToInt (CHUNK == "Signal:"))  ) ) 
                                                { 
                                                __context__.SourceCodeLine = 209;
                                                FNDEBUG (  __context__ , "FB", "Signal") ; 
                                                __context__.SourceCodeLine = 210;
                                                UI_EVENT_RELEASED  .UpdateValue ( LINE  ) ; 
                                                } 
                                            
                                            } 
                                        
                                        else 
                                            {
                                            __context__.SourceCodeLine = 213;
                                            if ( Functions.TestForTrue  ( ( Functions.BoolToInt (CHUNK == "Changed"))  ) ) 
                                                { 
                                                __context__.SourceCodeLine = 214;
                                                FNDEBUG (  __context__ , "FB", "Released") ; 
                                                __context__.SourceCodeLine = 215;
                                                CHUNK  .UpdateValue ( Functions.Remove ( " " , LINE )  ) ; 
                                                __context__.SourceCodeLine = 216;
                                                CHUNK  .UpdateValue ( Functions.Left ( CHUNK ,  (int) ( (Functions.Length( CHUNK ) - 1) ) )  ) ; 
                                                __context__.SourceCodeLine = 217;
                                                if ( Functions.TestForTrue  ( ( Functions.BoolToInt (CHUNK == "Signal:"))  ) ) 
                                                    { 
                                                    __context__.SourceCodeLine = 218;
                                                    FNDEBUG (  __context__ , "FB", "Signal") ; 
                                                    __context__.SourceCodeLine = 219;
                                                    UI_EVENT_CHANGED  .UpdateValue ( LINE  ) ; 
                                                    } 
                                                
                                                } 
                                            
                                            }
                                        
                                        }
                                    
                                    }
                                
                                } 
                            
                            } 
                        
                        } 
                    
                    } 
                
                else 
                    {
                    __context__.SourceCodeLine = 226;
                    if ( Functions.TestForTrue  ( ( Functions.BoolToInt (CHUNK == "*r"))  ) ) 
                        { 
                        __context__.SourceCodeLine = 227;
                        Trace( "{0}", "Result Feedback" ) ; 
                        } 
                    
                    else 
                        {
                        __context__.SourceCodeLine = 229;
                        if ( Functions.TestForTrue  ( ( Functions.BoolToInt (CHUNK == "*s"))  ) ) 
                            { 
                            __context__.SourceCodeLine = 230;
                            FNDEBUG (  __context__ , "FB", "Status") ; 
                            __context__.SourceCodeLine = 231;
                            CHUNK  .UpdateValue ( Functions.Remove ( " " , LINE )  ) ; 
                            __context__.SourceCodeLine = 232;
                            CHUNK  .UpdateValue ( Functions.Left ( CHUNK ,  (int) ( (Functions.Length( CHUNK ) - 1) ) )  ) ; 
                            __context__.SourceCodeLine = 233;
                            if ( Functions.TestForTrue  ( ( Functions.BoolToInt (CHUNK == "Standby"))  ) ) 
                                { 
                                __context__.SourceCodeLine = 234;
                                FNDEBUG (  __context__ , "FB", "Standby") ; 
                                __context__.SourceCodeLine = 235;
                                CHUNK  .UpdateValue ( Functions.Remove ( " " , LINE )  ) ; 
                                __context__.SourceCodeLine = 236;
                                CHUNK  .UpdateValue ( Functions.Left ( CHUNK ,  (int) ( (Functions.Length( CHUNK ) - 1) ) )  ) ; 
                                __context__.SourceCodeLine = 237;
                                if ( Functions.TestForTrue  ( ( Functions.BoolToInt (CHUNK == "State:"))  ) ) 
                                    { 
                                    __context__.SourceCodeLine = 238;
                                    FNDEBUG (  __context__ , "FB", "State:") ; 
                                    __context__.SourceCodeLine = 240;
                                    if ( Functions.TestForTrue  ( ( Functions.BoolToInt (CHUNK == "Off"))  ) ) 
                                        { 
                                        __context__.SourceCodeLine = 241;
                                        FNDEBUG (  __context__ , "FB", "Off") ; 
                                        __context__.SourceCodeLine = 242;
                                        WAKE_FB  .Value = (ushort) ( 0 ) ; 
                                        __context__.SourceCodeLine = 243;
                                        SLEEP_FB  .Value = (ushort) ( 1 ) ; 
                                        } 
                                    
                                    __context__.SourceCodeLine = 245;
                                    if ( Functions.TestForTrue  ( ( Functions.BoolToInt (CHUNK == "Standby"))  ) ) 
                                        { 
                                        __context__.SourceCodeLine = 246;
                                        FNDEBUG (  __context__ , "FB", "Standby") ; 
                                        __context__.SourceCodeLine = 247;
                                        WAKE_FB  .Value = (ushort) ( 1 ) ; 
                                        __context__.SourceCodeLine = 248;
                                        SLEEP_FB  .Value = (ushort) ( 0 ) ; 
                                        } 
                                    
                                    } 
                                
                                } 
                            
                            } 
                        
                        }
                    
                    }
                
                }
            
            __context__.SourceCodeLine = 160;
            } 
        
        
        
    }
    catch(Exception e) { ObjectCatchHandler(e); }
    finally { ObjectFinallyHandler( __SignalEventArg__ ); }
    return this;
    
}


public override void LogosSplusInitialize()
{
    SocketInfo __socketinfo__ = new SocketInfo( 1, this );
    InitialParametersClass.ResolveHostName = __socketinfo__.ResolveHostName;
    _SplusNVRAM = new SplusNVRAM( this );
    
    DEBUG = new Crestron.Logos.SplusObjects.DigitalInput( DEBUG__DigitalInput__, this );
    m_DigitalInputList.Add( DEBUG__DigitalInput__, DEBUG );
    
    INITCOMMS = new Crestron.Logos.SplusObjects.DigitalInput( INITCOMMS__DigitalInput__, this );
    m_DigitalInputList.Add( INITCOMMS__DigitalInput__, INITCOMMS );
    
    WAKE = new Crestron.Logos.SplusObjects.DigitalInput( WAKE__DigitalInput__, this );
    m_DigitalInputList.Add( WAKE__DigitalInput__, WAKE );
    
    SLEEP = new Crestron.Logos.SplusObjects.DigitalInput( SLEEP__DigitalInput__, this );
    m_DigitalInputList.Add( SLEEP__DigitalInput__, SLEEP );
    
    WAKE_FB = new Crestron.Logos.SplusObjects.DigitalOutput( WAKE_FB__DigitalOutput__, this );
    m_DigitalOutputList.Add( WAKE_FB__DigitalOutput__, WAKE_FB );
    
    SLEEP_FB = new Crestron.Logos.SplusObjects.DigitalOutput( SLEEP_FB__DigitalOutput__, this );
    m_DigitalOutputList.Add( SLEEP_FB__DigitalOutput__, SLEEP_FB );
    
    UI_EVENT_PRESSED = new Crestron.Logos.SplusObjects.StringOutput( UI_EVENT_PRESSED__AnalogSerialOutput__, this );
    m_StringOutputList.Add( UI_EVENT_PRESSED__AnalogSerialOutput__, UI_EVENT_PRESSED );
    
    UI_EVENT_RELEASED = new Crestron.Logos.SplusObjects.StringOutput( UI_EVENT_RELEASED__AnalogSerialOutput__, this );
    m_StringOutputList.Add( UI_EVENT_RELEASED__AnalogSerialOutput__, UI_EVENT_RELEASED );
    
    UI_EVENT_CLICK = new Crestron.Logos.SplusObjects.StringOutput( UI_EVENT_CLICK__AnalogSerialOutput__, this );
    m_StringOutputList.Add( UI_EVENT_CLICK__AnalogSerialOutput__, UI_EVENT_CLICK );
    
    UI_EVENT_CHANGED = new Crestron.Logos.SplusObjects.StringOutput( UI_EVENT_CHANGED__AnalogSerialOutput__, this );
    m_StringOutputList.Add( UI_EVENT_CHANGED__AnalogSerialOutput__, UI_EVENT_CHANGED );
    
    TX = new Crestron.Logos.SplusObjects.StringOutput( TX__AnalogSerialOutput__, this );
    m_StringOutputList.Add( TX__AnalogSerialOutput__, TX );
    
    RX = new Crestron.Logos.SplusObjects.BufferInput( RX__AnalogSerialInput__, 2000, this );
    m_StringInputList.Add( RX__AnalogSerialInput__, RX );
    
    WAITINIT_Callback = new WaitFunction( WAITINIT_CallbackFn );
    
    INITCOMMS.OnDigitalPush.Add( new InputChangeHandlerWrapper( INITCOMMS_OnPush_0, false ) );
    RX.OnSerialChange.Add( new InputChangeHandlerWrapper( RX_OnChange_1, false ) );
    
    _SplusNVRAM.PopulateCustomAttributeList( true );
    
    NVRAM = _SplusNVRAM;
    
}

public override void LogosSimplSharpInitialize()
{
    
    
}

public UserModuleClass_CISCOVC ( string InstanceName, string ReferenceID, Crestron.Logos.SplusObjects.CrestronStringEncoding nEncodingType ) : base( InstanceName, ReferenceID, nEncodingType ) {}


private WaitFunction WAITINIT_Callback;


const uint DEBUG__DigitalInput__ = 0;
const uint INITCOMMS__DigitalInput__ = 1;
const uint WAKE__DigitalInput__ = 2;
const uint SLEEP__DigitalInput__ = 3;
const uint RX__AnalogSerialInput__ = 0;
const uint WAKE_FB__DigitalOutput__ = 0;
const uint SLEEP_FB__DigitalOutput__ = 1;
const uint UI_EVENT_PRESSED__AnalogSerialOutput__ = 0;
const uint UI_EVENT_RELEASED__AnalogSerialOutput__ = 1;
const uint UI_EVENT_CLICK__AnalogSerialOutput__ = 2;
const uint UI_EVENT_CHANGED__AnalogSerialOutput__ = 3;
const uint TX__AnalogSerialOutput__ = 4;

[SplusStructAttribute(-1, true, false)]
public class SplusNVRAM : SplusStructureBase
{

    public SplusNVRAM( SplusObject __caller__ ) : base( __caller__ ) {}
    
    
}

SplusNVRAM _SplusNVRAM = null;

public class __CEvent__ : CEvent
{
    public __CEvent__() {}
    public void Close() { base.Close(); }
    public int Reset() { return base.Reset() ? 1 : 0; }
    public int Set() { return base.Set() ? 1 : 0; }
    public int Wait( int timeOutInMs ) { return base.Wait( timeOutInMs ) ? 1 : 0; }
}
public class __CMutex__ : CMutex
{
    public __CMutex__() {}
    public void Close() { base.Close(); }
    public void ReleaseMutex() { base.ReleaseMutex(); }
    public int WaitForMutex() { return base.WaitForMutex() ? 1 : 0; }
}
 public int IsNull( object obj ){ return (obj == null) ? 1 : 0; }
}


}
