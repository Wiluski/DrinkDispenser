#ifndef RelayControl_h
#define RelayControl_h

#include <Arduino_FreeRTOS.h>


#ifdef __cplusplus
 extern "C" {
#endif

void TaskRelayControl( void *pvParameters );

void GT( void );

#ifdef __cplusplus
}
#endif

#endif
