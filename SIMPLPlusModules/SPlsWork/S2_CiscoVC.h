#ifndef __S2_CISCOVC_H__
#define __S2_CISCOVC_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_CiscoVC_DEBUG_DIG_INPUT 0
#define __S2_CiscoVC_INITCOMMS_DIG_INPUT 1
#define __S2_CiscoVC_WAKE_DIG_INPUT 2
#define __S2_CiscoVC_SLEEP_DIG_INPUT 3


/*
* ANALOG_INPUT
*/


#define __S2_CiscoVC_RX_BUFFER_INPUT 0
#define __S2_CiscoVC_RX_BUFFER_MAX_LEN 2000
CREATE_STRING_STRUCT( S2_CiscoVC, __RX, __S2_CiscoVC_RX_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/
#define __S2_CiscoVC_WAKE_FB_DIG_OUTPUT 0
#define __S2_CiscoVC_SLEEP_FB_DIG_OUTPUT 1


/*
* ANALOG_OUTPUT
*/

#define __S2_CiscoVC_UI_EVENT_PRESSED_STRING_OUTPUT 0
#define __S2_CiscoVC_UI_EVENT_RELEASED_STRING_OUTPUT 1
#define __S2_CiscoVC_UI_EVENT_CLICK_STRING_OUTPUT 2
#define __S2_CiscoVC_UI_EVENT_CHANGED_STRING_OUTPUT 3
#define __S2_CiscoVC_TX_STRING_OUTPUT 4


/*
* Direct Socket Variables
*/




/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* STRING_PARAMETER
*/


/*
* INTEGER
*/


/*
* LONG_INTEGER
*/


/*
* SIGNED_INTEGER
*/


/*
* SIGNED_LONG_INTEGER
*/


/*
* STRING
*/

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_CiscoVC )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_STRING_STRUCT( S2_CiscoVC, __RX );
};

START_NVRAM_VAR_STRUCT( S2_CiscoVC )
{
};

DEFINE_WAITEVENT( S2_CiscoVC, WAITINIT );


#endif //__S2_CISCOVC_H__

