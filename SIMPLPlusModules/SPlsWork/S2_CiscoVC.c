#include "TypeDefs.h"
#include "Globals.h"
#include "FnctList.h"
#include "Library.h"
#include "SimplSig.h"
#include "S2_CiscoVC.h"

FUNCTION_MAIN( S2_CiscoVC );
EVENT_HANDLER( S2_CiscoVC );
DEFINE_ENTRYPOINT( S2_CiscoVC );



static void S2_CiscoVC__FNDEBUG ( struct StringHdr_s* __MSG , struct StringHdr_s* __DETAIL ) 
    { 
    /* Begin local function variable declarations */
    
    CheckStack( INSTANCE_PTR( S2_CiscoVC ) );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 137 );
    Print( INSTANCE_PTR( S2_CiscoVC ) , 21, "\xFA\xE0""CiscoSX: [%s] [%s]""\xFB", LOCAL_STRING_STRUCT( __MSG  )  , LOCAL_STRING_STRUCT( __DETAIL  )  ) ; 
    
    S2_CiscoVC_Exit__FNDEBUG:
/* Begin Free local function variables */
    /* End Free local function variables */
    
    }
    
static void S2_CiscoVC__FNINITCOMMS ( ) 
    { 
    /* Begin local function variable declarations */
    
    CheckStack( INSTANCE_PTR( S2_CiscoVC ) );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 141 );
    CREATE_WAIT( S2_CiscoVC, 200, WAITINIT );
    
    
    S2_CiscoVC_Exit__FNINITCOMMS:
/* Begin Free local function variables */
    /* End Free local function variables */
    
    }
    
DEFINE_WAITEVENT( S2_CiscoVC, WAITINIT )
    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "xfeedback register /event/userinterface/extensions/event\r\n" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    SAVE_GLOBAL_POINTERS ;
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "xfeedback register /event/userinterface/extensions/event\r\n" );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 142 );
    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_CiscoVC ) ) == 0 ) {
    FormatString ( INSTANCE_PTR( S2_CiscoVC ) , GENERIC_STRING_OUTPUT( S2_CiscoVC )  ,2 , "%s"  ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )    )  ; 
    SetSerial( INSTANCE_PTR( S2_CiscoVC ), __S2_CiscoVC_TX_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_CiscoVC ) );
    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_CiscoVC ) ); }
    
    ; 
    

S2_CiscoVC_Exit__WAITINIT:
    
    /* Begin Free local function variables */
    FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
    /* End Free local function variables */
    RESTORE_GLOBAL_POINTERS ;
    return 0 ;
    }
DEFINE_INDEPENDENT_EVENTHANDLER( S2_CiscoVC, 00000 /*InitComms*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "xfeedback register /event/userinterface/extensions/event\r\n" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    CREATE_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_1__, sizeof( "xfeedback register /Status/Standby\r\n" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_1__ );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_CiscoVC ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "xfeedback register /event/userinterface/extensions/event\r\n" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_1__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__, "xfeedback register /Status/Standby\r\n" );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 151 );
    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_CiscoVC ) ) == 0 ) {
    FormatString ( INSTANCE_PTR( S2_CiscoVC ) , GENERIC_STRING_OUTPUT( S2_CiscoVC )  ,2 , "%s"  ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )    )  ; 
    SetSerial( INSTANCE_PTR( S2_CiscoVC ), __S2_CiscoVC_TX_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_CiscoVC ) );
    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_CiscoVC ) ); }
    
    ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 152 );
    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_CiscoVC ) ) == 0 ) {
    FormatString ( INSTANCE_PTR( S2_CiscoVC ) , GENERIC_STRING_OUTPUT( S2_CiscoVC )  ,2 , "%s"  ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )    )  ; 
    SetSerial( INSTANCE_PTR( S2_CiscoVC ), __S2_CiscoVC_TX_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_CiscoVC ) );
    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_CiscoVC ) ); }
    
    ; 
    
    S2_CiscoVC_Exit__Event_0:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}

DEFINE_INDEPENDENT_EVENTHANDLER( S2_CiscoVC, 00001 /*Rx*/ )

    {
    /* Begin local function variable declarations */
    
    CREATE_STRING_STRUCT( S2_CiscoVC, __LINE, 250 );
    DECLARE_LOCAL_STRING_STRUCT( S2_CiscoVC, __LINE );
    
    CREATE_STRING_STRUCT( S2_CiscoVC, __CHUNK, 250 );
    DECLARE_LOCAL_STRING_STRUCT( S2_CiscoVC, __CHUNK );
    
    CREATE_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_0__, sizeof( "\r\n" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_0__ );
    
    CREATE_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_1__, sizeof( "Line" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_1__ );
    
    CREATE_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_2__, sizeof( " " ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_2__ );
    
    CREATE_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_3__, sizeof( "Chunk" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_3__ );
    
    CREATE_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_4__, sizeof( "**" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_4__ );
    
    CREATE_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_5__, sizeof( "FB" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_5__ );
    
    CREATE_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_6__, sizeof( "Misc" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_6__ );
    
    CREATE_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_7__, sizeof( "*e" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_7__ );
    
    CREATE_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_8__, sizeof( "Event" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_8__ );
    
    CREATE_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_9__, sizeof( "UserInterface" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_9__ );
    
    CREATE_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_10__, sizeof( "Extensions" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_10__ );
    
    CREATE_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_11__, sizeof( "Clicked" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_11__ );
    
    CREATE_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_12__, sizeof( "Signal:" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_12__ );
    
    CREATE_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_13__, sizeof( "Signal" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_13__ );
    
    CREATE_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_14__, sizeof( "Pressed" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_14__ );
    
    CREATE_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_15__, sizeof( "Released" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_15__ );
    
    CREATE_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_16__, sizeof( "Changed" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_16__ );
    
    CREATE_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_17__, sizeof( "*r" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_17__ );
    
    CREATE_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_18__, sizeof( "Result Feedback" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_18__ );
    
    CREATE_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_19__, sizeof( "*s" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_19__ );
    
    CREATE_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_20__, sizeof( "Status" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_20__ );
    
    CREATE_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_21__, sizeof( "Standby" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_21__ );
    
    CREATE_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_22__, sizeof( "State:" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_22__ );
    
    CREATE_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_23__, sizeof( "Off" ) );
    DECLARE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_23__ );
    
    CREATE_STRING_STRUCT( S2_CiscoVC, __FN_DST_STR__, 2000 );
    DECLARE_LOCAL_STRING_STRUCT( S2_CiscoVC, __FN_DST_STR__ );
    
    CREATE_STRING_STRUCT( S2_CiscoVC, __FN_DST_STR__1, 2000 );
    DECLARE_LOCAL_STRING_STRUCT( S2_CiscoVC, __FN_DST_STR__1 );
    
    SAVE_GLOBAL_POINTERS ;
    CheckStack( INSTANCE_PTR( S2_CiscoVC ) );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_CiscoVC, __LINE );
    INITIALIZE_LOCAL_STRING_STRUCT( __LINE, 250 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_CiscoVC, __CHUNK );
    INITIALIZE_LOCAL_STRING_STRUCT( __CHUNK, 250 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_0__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__, "\r\n" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_1__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__, "Line" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_2__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__, " " );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_3__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__, "Chunk" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_4__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__, "**" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_5__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__, "FB" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_6__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__, "Misc" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_7__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__, "*e" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_8__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__, "Event" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_9__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__, "UserInterface" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_10__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__, "Extensions" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_11__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__, "Clicked" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_12__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__, "Signal:" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_13__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_13__, "Signal" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_14__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_14__, "Pressed" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_15__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_15__, "Released" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_16__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_16__, "Changed" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_17__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_17__, "*r" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_18__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_18__, "Result Feedback" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_19__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_19__, "*s" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_20__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_20__, "Status" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_21__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_21__, "Standby" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_22__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_22__, "State:" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_CiscoVC, __SPLS_TMPVAR__LOCALSTR_23__ );
    SET_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_23__, "Off" );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_CiscoVC, __FN_DST_STR__ );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__, 2000 );
    
    ALLOCATE_LOCAL_STRING_STRUCT( S2_CiscoVC, __FN_DST_STR__1 );
    INITIALIZE_LOCAL_STRING_STRUCT( __FN_DST_STR__1, 2000 );
    
    
    /* End local function variable declarations */
    
    
    UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 158 );
    Print( INSTANCE_PTR( S2_CiscoVC ) , 7, "\xFA\xE0""[%s]""\xFB", GLOBAL_STRING_STRUCT( S2_CiscoVC, __RX  )  ) ; 
    UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 160 );
    while ( (Find( LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )  , GLOBAL_STRING_STRUCT( S2_CiscoVC, __RX  )  , 1 , 1 ) > 0)) 
        { 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 161 );
        FormatString ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__1 )    ,2 , "%s"  , Remove ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ )   , GLOBAL_STRING_STRUCT( S2_CiscoVC, __RX  )    , 1  )  )  ; 
        FormatString ( INSTANCE_PTR( S2_CiscoVC ) , LOCAL_STRING_STRUCT( __LINE  )   ,2 , "%s"  , __FN_DST_STR__1 ) ; 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 162 );
        FormatString ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__1 )    ,2 , "%s"  , Left ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __LINE  )  , (Len( LOCAL_STRING_STRUCT( __LINE  )  ) - 2))  )  ; 
        FormatString ( INSTANCE_PTR( S2_CiscoVC ) , LOCAL_STRING_STRUCT( __LINE  )   ,2 , "%s"  , __FN_DST_STR__1 ) ; 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 163 );
        S2_CiscoVC__FNDEBUG (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ )   ,  (struct StringHdr_s* )  LOCAL_STRING_STRUCT( __LINE  )  ) ; 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 164 );
        FormatString ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__1 )    ,2 , "%s"  , Remove ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ )   , LOCAL_STRING_STRUCT( __LINE  )    , 1  )  )  ; 
        FormatString ( INSTANCE_PTR( S2_CiscoVC ) , LOCAL_STRING_STRUCT( __CHUNK  )   ,2 , "%s"  , __FN_DST_STR__1 ) ; 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 165 );
        FormatString ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__1 )    ,2 , "%s"  , Left ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __CHUNK  )  , (Len( LOCAL_STRING_STRUCT( __CHUNK  )  ) - 1))  )  ; 
        FormatString ( INSTANCE_PTR( S2_CiscoVC ) , LOCAL_STRING_STRUCT( __CHUNK  )   ,2 , "%s"  , __FN_DST_STR__1 ) ; 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 166 );
        S2_CiscoVC__FNDEBUG (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ )   ,  (struct StringHdr_s* )  LOCAL_STRING_STRUCT( __CHUNK  )  ) ; 
        UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 167 );
        if ( (CompareStrings( LOCAL_STRING_STRUCT( __CHUNK  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ ) , 1 ) == 0)) 
            { 
            UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 168 );
            S2_CiscoVC__FNDEBUG (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ )   ,  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__ )   ) ; 
            } 
        
        else 
            {
            UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 170 );
            if ( (CompareStrings( LOCAL_STRING_STRUCT( __CHUNK  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__ ) , 1 ) == 0)) 
                { 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 171 );
                S2_CiscoVC__FNDEBUG (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ )   ,  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__ )   ) ; 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 172 );
                FormatString ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__1 )    ,2 , "%s"  , Remove ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ )   , LOCAL_STRING_STRUCT( __LINE  )    , 1  )  )  ; 
                FormatString ( INSTANCE_PTR( S2_CiscoVC ) , LOCAL_STRING_STRUCT( __CHUNK  )   ,2 , "%s"  , __FN_DST_STR__1 ) ; 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 173 );
                FormatString ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__1 )    ,2 , "%s"  , Left ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __CHUNK  )  , (Len( LOCAL_STRING_STRUCT( __CHUNK  )  ) - 1))  )  ; 
                FormatString ( INSTANCE_PTR( S2_CiscoVC ) , LOCAL_STRING_STRUCT( __CHUNK  )   ,2 , "%s"  , __FN_DST_STR__1 ) ; 
                UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 174 );
                if ( (CompareStrings( LOCAL_STRING_STRUCT( __CHUNK  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__ ) , 1 ) == 0)) 
                    { 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 175 );
                    S2_CiscoVC__FNDEBUG (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ )   ,  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__ )   ) ; 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 176 );
                    FormatString ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__1 )    ,2 , "%s"  , Remove ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ )   , LOCAL_STRING_STRUCT( __LINE  )    , 1  )  )  ; 
                    FormatString ( INSTANCE_PTR( S2_CiscoVC ) , LOCAL_STRING_STRUCT( __CHUNK  )   ,2 , "%s"  , __FN_DST_STR__1 ) ; 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 177 );
                    FormatString ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__1 )    ,2 , "%s"  , Left ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __CHUNK  )  , (Len( LOCAL_STRING_STRUCT( __CHUNK  )  ) - 1))  )  ; 
                    FormatString ( INSTANCE_PTR( S2_CiscoVC ) , LOCAL_STRING_STRUCT( __CHUNK  )   ,2 , "%s"  , __FN_DST_STR__1 ) ; 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 178 );
                    if ( (CompareStrings( LOCAL_STRING_STRUCT( __CHUNK  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__ ) , 1 ) == 0)) 
                        { 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 179 );
                        S2_CiscoVC__FNDEBUG (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ )   ,  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__ )   ) ; 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 180 );
                        FormatString ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__1 )    ,2 , "%s"  , Remove ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ )   , LOCAL_STRING_STRUCT( __LINE  )    , 1  )  )  ; 
                        FormatString ( INSTANCE_PTR( S2_CiscoVC ) , LOCAL_STRING_STRUCT( __CHUNK  )   ,2 , "%s"  , __FN_DST_STR__1 ) ; 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 181 );
                        FormatString ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__1 )    ,2 , "%s"  , Left ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __CHUNK  )  , (Len( LOCAL_STRING_STRUCT( __CHUNK  )  ) - 1))  )  ; 
                        FormatString ( INSTANCE_PTR( S2_CiscoVC ) , LOCAL_STRING_STRUCT( __CHUNK  )   ,2 , "%s"  , __FN_DST_STR__1 ) ; 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 182 );
                        if ( (CompareStrings( LOCAL_STRING_STRUCT( __CHUNK  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__ ) , 1 ) == 0)) 
                            { 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 183 );
                            S2_CiscoVC__FNDEBUG (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ )   ,  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__ )   ) ; 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 184 );
                            FormatString ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__1 )    ,2 , "%s"  , Remove ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ )   , LOCAL_STRING_STRUCT( __LINE  )    , 1  )  )  ; 
                            FormatString ( INSTANCE_PTR( S2_CiscoVC ) , LOCAL_STRING_STRUCT( __CHUNK  )   ,2 , "%s"  , __FN_DST_STR__1 ) ; 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 185 );
                            FormatString ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__1 )    ,2 , "%s"  , Left ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __CHUNK  )  , (Len( LOCAL_STRING_STRUCT( __CHUNK  )  ) - 1))  )  ; 
                            FormatString ( INSTANCE_PTR( S2_CiscoVC ) , LOCAL_STRING_STRUCT( __CHUNK  )   ,2 , "%s"  , __FN_DST_STR__1 ) ; 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 186 );
                            if ( (CompareStrings( LOCAL_STRING_STRUCT( __CHUNK  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__ ) , 1 ) == 0)) 
                                { 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 187 );
                                S2_CiscoVC__FNDEBUG (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ )   ,  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__ )   ) ; 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 188 );
                                FormatString ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__1 )    ,2 , "%s"  , Remove ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ )   , LOCAL_STRING_STRUCT( __LINE  )    , 1  )  )  ; 
                                FormatString ( INSTANCE_PTR( S2_CiscoVC ) , LOCAL_STRING_STRUCT( __CHUNK  )   ,2 , "%s"  , __FN_DST_STR__1 ) ; 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 189 );
                                FormatString ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__1 )    ,2 , "%s"  , Left ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __CHUNK  )  , (Len( LOCAL_STRING_STRUCT( __CHUNK  )  ) - 1))  )  ; 
                                FormatString ( INSTANCE_PTR( S2_CiscoVC ) , LOCAL_STRING_STRUCT( __CHUNK  )   ,2 , "%s"  , __FN_DST_STR__1 ) ; 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 190 );
                                if ( (CompareStrings( LOCAL_STRING_STRUCT( __CHUNK  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__ ) , 1 ) == 0)) 
                                    { 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 191 );
                                    S2_CiscoVC__FNDEBUG (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ )   ,  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_13__ )   ) ; 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 192 );
                                    if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_CiscoVC ) ) == 0 ) {
                                    FormatString ( INSTANCE_PTR( S2_CiscoVC ) , GENERIC_STRING_OUTPUT( S2_CiscoVC )  ,2 , "%s"  , LOCAL_STRING_STRUCT( __LINE  )   )  ; 
                                    SetSerial( INSTANCE_PTR( S2_CiscoVC ), __S2_CiscoVC_UI_EVENT_CLICK_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_CiscoVC ) );
                                    ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_CiscoVC ) ); }
                                    
                                    ; 
                                    } 
                                
                                } 
                            
                            else 
                                {
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 195 );
                                if ( (CompareStrings( LOCAL_STRING_STRUCT( __CHUNK  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_14__ ) , 1 ) == 0)) 
                                    { 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 196 );
                                    S2_CiscoVC__FNDEBUG (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ )   ,  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_14__ )   ) ; 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 197 );
                                    FormatString ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__1 )    ,2 , "%s"  , Remove ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ )   , LOCAL_STRING_STRUCT( __LINE  )    , 1  )  )  ; 
                                    FormatString ( INSTANCE_PTR( S2_CiscoVC ) , LOCAL_STRING_STRUCT( __CHUNK  )   ,2 , "%s"  , __FN_DST_STR__1 ) ; 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 198 );
                                    FormatString ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__1 )    ,2 , "%s"  , Left ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __CHUNK  )  , (Len( LOCAL_STRING_STRUCT( __CHUNK  )  ) - 1))  )  ; 
                                    FormatString ( INSTANCE_PTR( S2_CiscoVC ) , LOCAL_STRING_STRUCT( __CHUNK  )   ,2 , "%s"  , __FN_DST_STR__1 ) ; 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 199 );
                                    if ( (CompareStrings( LOCAL_STRING_STRUCT( __CHUNK  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__ ) , 1 ) == 0)) 
                                        { 
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 200 );
                                        S2_CiscoVC__FNDEBUG (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ )   ,  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_13__ )   ) ; 
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 201 );
                                        if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_CiscoVC ) ) == 0 ) {
                                        FormatString ( INSTANCE_PTR( S2_CiscoVC ) , GENERIC_STRING_OUTPUT( S2_CiscoVC )  ,2 , "%s"  , LOCAL_STRING_STRUCT( __LINE  )   )  ; 
                                        SetSerial( INSTANCE_PTR( S2_CiscoVC ), __S2_CiscoVC_UI_EVENT_PRESSED_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_CiscoVC ) );
                                        ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_CiscoVC ) ); }
                                        
                                        ; 
                                        } 
                                    
                                    } 
                                
                                else 
                                    {
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 204 );
                                    if ( (CompareStrings( LOCAL_STRING_STRUCT( __CHUNK  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_15__ ) , 1 ) == 0)) 
                                        { 
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 205 );
                                        S2_CiscoVC__FNDEBUG (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ )   ,  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_15__ )   ) ; 
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 206 );
                                        FormatString ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__1 )    ,2 , "%s"  , Remove ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ )   , LOCAL_STRING_STRUCT( __LINE  )    , 1  )  )  ; 
                                        FormatString ( INSTANCE_PTR( S2_CiscoVC ) , LOCAL_STRING_STRUCT( __CHUNK  )   ,2 , "%s"  , __FN_DST_STR__1 ) ; 
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 207 );
                                        FormatString ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__1 )    ,2 , "%s"  , Left ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __CHUNK  )  , (Len( LOCAL_STRING_STRUCT( __CHUNK  )  ) - 1))  )  ; 
                                        FormatString ( INSTANCE_PTR( S2_CiscoVC ) , LOCAL_STRING_STRUCT( __CHUNK  )   ,2 , "%s"  , __FN_DST_STR__1 ) ; 
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 208 );
                                        if ( (CompareStrings( LOCAL_STRING_STRUCT( __CHUNK  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__ ) , 1 ) == 0)) 
                                            { 
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 209 );
                                            S2_CiscoVC__FNDEBUG (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ )   ,  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_13__ )   ) ; 
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 210 );
                                            if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_CiscoVC ) ) == 0 ) {
                                            FormatString ( INSTANCE_PTR( S2_CiscoVC ) , GENERIC_STRING_OUTPUT( S2_CiscoVC )  ,2 , "%s"  , LOCAL_STRING_STRUCT( __LINE  )   )  ; 
                                            SetSerial( INSTANCE_PTR( S2_CiscoVC ), __S2_CiscoVC_UI_EVENT_RELEASED_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_CiscoVC ) );
                                            ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_CiscoVC ) ); }
                                            
                                            ; 
                                            } 
                                        
                                        } 
                                    
                                    else 
                                        {
                                        UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 213 );
                                        if ( (CompareStrings( LOCAL_STRING_STRUCT( __CHUNK  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_16__ ) , 1 ) == 0)) 
                                            { 
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 214 );
                                            S2_CiscoVC__FNDEBUG (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ )   ,  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_15__ )   ) ; 
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 215 );
                                            FormatString ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__1 )    ,2 , "%s"  , Remove ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ )   , LOCAL_STRING_STRUCT( __LINE  )    , 1  )  )  ; 
                                            FormatString ( INSTANCE_PTR( S2_CiscoVC ) , LOCAL_STRING_STRUCT( __CHUNK  )   ,2 , "%s"  , __FN_DST_STR__1 ) ; 
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 216 );
                                            FormatString ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__1 )    ,2 , "%s"  , Left ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __CHUNK  )  , (Len( LOCAL_STRING_STRUCT( __CHUNK  )  ) - 1))  )  ; 
                                            FormatString ( INSTANCE_PTR( S2_CiscoVC ) , LOCAL_STRING_STRUCT( __CHUNK  )   ,2 , "%s"  , __FN_DST_STR__1 ) ; 
                                            UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 217 );
                                            if ( (CompareStrings( LOCAL_STRING_STRUCT( __CHUNK  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__ ) , 1 ) == 0)) 
                                                { 
                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 218 );
                                                S2_CiscoVC__FNDEBUG (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ )   ,  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_13__ )   ) ; 
                                                UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 219 );
                                                if( ObtainStringOutputSemaphore( INSTANCE_PTR( S2_CiscoVC ) ) == 0 ) {
                                                FormatString ( INSTANCE_PTR( S2_CiscoVC ) , GENERIC_STRING_OUTPUT( S2_CiscoVC )  ,2 , "%s"  , LOCAL_STRING_STRUCT( __LINE  )   )  ; 
                                                SetSerial( INSTANCE_PTR( S2_CiscoVC ), __S2_CiscoVC_UI_EVENT_CHANGED_STRING_OUTPUT, GENERIC_STRING_OUTPUT( S2_CiscoVC ) );
                                                ReleaseStringOutputSemaphore( INSTANCE_PTR( S2_CiscoVC ) ); }
                                                
                                                ; 
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
                UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 226 );
                if ( (CompareStrings( LOCAL_STRING_STRUCT( __CHUNK  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_17__ ) , 1 ) == 0)) 
                    { 
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 227 );
                    Print( INSTANCE_PTR( S2_CiscoVC ) , 5, "\xFA\xE0""%s""\xFB",  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_18__ )   ) ; 
                    } 
                
                else 
                    {
                    UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 229 );
                    if ( (CompareStrings( LOCAL_STRING_STRUCT( __CHUNK  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_19__ ) , 1 ) == 0)) 
                        { 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 230 );
                        S2_CiscoVC__FNDEBUG (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ )   ,  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_20__ )   ) ; 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 231 );
                        FormatString ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__1 )    ,2 , "%s"  , Remove ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ )   , LOCAL_STRING_STRUCT( __LINE  )    , 1  )  )  ; 
                        FormatString ( INSTANCE_PTR( S2_CiscoVC ) , LOCAL_STRING_STRUCT( __CHUNK  )   ,2 , "%s"  , __FN_DST_STR__1 ) ; 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 232 );
                        FormatString ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__1 )    ,2 , "%s"  , Left ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __CHUNK  )  , (Len( LOCAL_STRING_STRUCT( __CHUNK  )  ) - 1))  )  ; 
                        FormatString ( INSTANCE_PTR( S2_CiscoVC ) , LOCAL_STRING_STRUCT( __CHUNK  )   ,2 , "%s"  , __FN_DST_STR__1 ) ; 
                        UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 233 );
                        if ( (CompareStrings( LOCAL_STRING_STRUCT( __CHUNK  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_21__ ) , 1 ) == 0)) 
                            { 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 234 );
                            S2_CiscoVC__FNDEBUG (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ )   ,  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_21__ )   ) ; 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 235 );
                            FormatString ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__1 )    ,2 , "%s"  , Remove ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    ,  LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ )   , LOCAL_STRING_STRUCT( __LINE  )    , 1  )  )  ; 
                            FormatString ( INSTANCE_PTR( S2_CiscoVC ) , LOCAL_STRING_STRUCT( __CHUNK  )   ,2 , "%s"  , __FN_DST_STR__1 ) ; 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 236 );
                            FormatString ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__1 )    ,2 , "%s"  , Left ( INSTANCE_PTR( S2_CiscoVC ) ,  LOCAL_STRING_STRUCT( __FN_DST_STR__ )    , LOCAL_STRING_STRUCT( __CHUNK  )  , (Len( LOCAL_STRING_STRUCT( __CHUNK  )  ) - 1))  )  ; 
                            FormatString ( INSTANCE_PTR( S2_CiscoVC ) , LOCAL_STRING_STRUCT( __CHUNK  )   ,2 , "%s"  , __FN_DST_STR__1 ) ; 
                            UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 237 );
                            if ( (CompareStrings( LOCAL_STRING_STRUCT( __CHUNK  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_22__ ) , 1 ) == 0)) 
                                { 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 238 );
                                S2_CiscoVC__FNDEBUG (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ )   ,  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_22__ )   ) ; 
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 240 );
                                if ( (CompareStrings( LOCAL_STRING_STRUCT( __CHUNK  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_23__ ) , 1 ) == 0)) 
                                    { 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 241 );
                                    S2_CiscoVC__FNDEBUG (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ )   ,  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_23__ )   ) ; 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 242 );
                                    SetDigital ( INSTANCE_PTR( S2_CiscoVC ), __S2_CiscoVC_WAKE_FB_DIG_OUTPUT, 0) ; 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 243 );
                                    SetDigital ( INSTANCE_PTR( S2_CiscoVC ), __S2_CiscoVC_SLEEP_FB_DIG_OUTPUT, 1) ; 
                                    } 
                                
                                UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 245 );
                                if ( (CompareStrings( LOCAL_STRING_STRUCT( __CHUNK  ) , LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_21__ ) , 1 ) == 0)) 
                                    { 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 246 );
                                    S2_CiscoVC__FNDEBUG (  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ )   ,  (struct StringHdr_s* )   LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_21__ )   ) ; 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 247 );
                                    SetDigital ( INSTANCE_PTR( S2_CiscoVC ), __S2_CiscoVC_WAKE_FB_DIG_OUTPUT, 1) ; 
                                    UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 248 );
                                    SetDigital ( INSTANCE_PTR( S2_CiscoVC ), __S2_CiscoVC_SLEEP_FB_DIG_OUTPUT, 0) ; 
                                    } 
                                
                                } 
                            
                            } 
                        
                        } 
                    
                    }
                
                }
            
            }
        
        UpdateSourceCodeLine( INSTANCE_PTR( S2_CiscoVC ), 160 );
        } 
    
    
    S2_CiscoVC_Exit__Event_1:
    /* Begin Free local function variables */
FREE_LOCAL_STRING_STRUCT( __LINE );
FREE_LOCAL_STRING_STRUCT( __CHUNK );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_0__ );
FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__ );
FREE_LOCAL_STRING_STRUCT( __FN_DST_STR__1 );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_1__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_2__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_3__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_4__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_5__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_6__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_7__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_8__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_9__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_10__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_11__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_12__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_13__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_14__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_15__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_16__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_17__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_18__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_19__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_20__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_21__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_22__ );
FREE_LOCAL_STRING_STRUCT( __SPLS_TMPVAR__LOCALSTR_23__ );
/* End Free local function variables */
RESTORE_GLOBAL_POINTERS ;

}


/********************************************************************************
  Constructor
********************************************************************************/

/********************************************************************************
  Destructor
********************************************************************************/

/********************************************************************************
  static void ProcessDigitalEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessDigitalEvent( struct Signal_s *Signal )
{
    switch ( Signal->SignalNumber )
    {
        case __S2_CiscoVC_INITCOMMS_DIG_INPUT :
            if ( Signal->Value /*Push*/ )
            {
                SAFESPAWN_EVENTHANDLER( S2_CiscoVC, 00000 /*InitComms*/, 0 );
                
            }
            else /*Release*/
            {
                SetSymbolEventStart ( INSTANCE_PTR( S2_CiscoVC ) ); 
                
            }
            break;
            
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_CiscoVC ) ); 
            break ;
        
    }
}

/********************************************************************************
  static void ProcessAnalogEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessAnalogEvent( struct Signal_s *Signal )
{
    switch ( Signal->SignalNumber )
    {
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_CiscoVC ) ); 
            break ;
        
    }
}

/********************************************************************************
  static void ProcessStringEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessStringEvent( struct Signal_s *Signal )
{
    if ( UPDATE_INPUT_STRING( S2_CiscoVC ) == 1 ) return ;
    
    switch ( Signal->SignalNumber )
    {
        case __S2_CiscoVC_RX_BUFFER_INPUT :
            SAFESPAWN_EVENTHANDLER( S2_CiscoVC, 00001 /*Rx*/, 0 );
            break;
            
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_CiscoVC ) ); 
            break ;
        
    }
}

/********************************************************************************
  static void ProcessSocketConnectEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessSocketConnectEvent( struct Signal_s *Signal )
{
    switch ( Signal->SignalNumber )
    {
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_CiscoVC ) ); 
            break ;
        
    }
}

/********************************************************************************
  static void ProcessSocketDisconnectEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessSocketDisconnectEvent( struct Signal_s *Signal )
{
    switch ( Signal->SignalNumber )
    {
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_CiscoVC ) ); 
            break ;
        
    }
}

/********************************************************************************
  static void ProcessSocketReceiveEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessSocketReceiveEvent( struct Signal_s *Signal )
{
    if ( UPDATE_INPUT_STRING( S2_CiscoVC ) == 1 ) return ;
    
    switch ( Signal->SignalNumber )
    {
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_CiscoVC ) ); 
            break ;
        
    }
}

/********************************************************************************
  static void ProcessSocketStatusEvent( struct Signal_s *Signal )
********************************************************************************/
static void ProcessSocketStatusEvent( struct Signal_s *Signal )
{
    switch ( Signal->SignalNumber )
    {
        default :
            SetSymbolEventStart ( INSTANCE_PTR( S2_CiscoVC ) ); 
            break ;
        
    }
}

/********************************************************************************
  EVENT_HANDLER( S2_CiscoVC )
********************************************************************************/
EVENT_HANDLER( S2_CiscoVC )
    {
    SAVE_GLOBAL_POINTERS ;
    switch ( Signal->Type )
        {
        case e_SIGNAL_TYPE_DIGITAL :
            ProcessDigitalEvent( Signal );
            break ;
        case e_SIGNAL_TYPE_ANALOG :
            ProcessAnalogEvent( Signal );
            break ;
        case e_SIGNAL_TYPE_STRING :
            ProcessStringEvent( Signal );
            break ;
        case e_SIGNAL_TYPE_CONNECT :
            ProcessSocketConnectEvent( Signal );
            break ;
        case e_SIGNAL_TYPE_DISCONNECT :
            ProcessSocketDisconnectEvent( Signal );
            break ;
        case e_SIGNAL_TYPE_RECEIVE :
            ProcessSocketReceiveEvent( Signal );
            break ;
        case e_SIGNAL_TYPE_STATUS :
            ProcessSocketStatusEvent( Signal );
            break ;
        }
        
    RESTORE_GLOBAL_POINTERS ;
    
    }
    
/********************************************************************************
  FUNCTION_MAIN( S2_CiscoVC )
********************************************************************************/
FUNCTION_MAIN( S2_CiscoVC )
{
    SAVE_GLOBAL_POINTERS ;
    
    SET_INSTANCE_POINTER ( S2_CiscoVC );
    
    INITIALIZE_GLOBAL_STRING_STRUCT ( S2_CiscoVC, __RX, e_INPUT_TYPE_BUFFER, __S2_CiscoVC_RX_BUFFER_MAX_LEN );
    REGISTER_GLOBAL_INPUT_STRING ( S2_CiscoVC, __RX, __S2_CiscoVC_RX_BUFFER_INPUT );
    
    INITIALIZE_GLOBAL_STRING_STRUCT ( S2_CiscoVC, sGenericOutStr, e_INPUT_TYPE_NONE, GENERIC_STRING_OUTPUT_LEN );
    
    
    REGISTER_GLOBAL_INPUT_STRING ( S2_CiscoVC, __RX, __S2_CiscoVC_RX_BUFFER_INPUT );
    
    S2_CiscoVC_Exit__MAIN:
    RESTORE_GLOBAL_POINTERS ;
    return 0 ;
    }
