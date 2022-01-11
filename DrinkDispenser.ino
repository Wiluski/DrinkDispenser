#include <Arduino_FreeRTOS.h>
#include "RelayControl.h"
#include "DrinkConfiguration.h"

/*static void TaskRelayControl( void *pvParameters );
static void TaskRWDisplay( void *pvParameters );
static void TaskClock( void *pvParameters );*/

void setup() {

  pinMode(JUICE, OUTPUT);
  pinMode(TONIC, OUTPUT);
  
  Serial.begin(9600);
    
  while(!Serial); // Wait Serial terminal to open.

  xTaskCreate( TaskRelayControl, "RelayControl", 128, NULL, 2, NULL);
  //xTaskCreate( TaskRWDisplay, "RWDisplay", 128, NULL, 2, NULL);
  //xTaskCreate( TaskClock, "Clock", 128, NULL, 2, NULL);
  
  vTaskStartScheduler();
}

void loop() {
  // put your main code here, to run repeatedly:

}


/*static void TaskRWDisplay( void *pvParameters )
{
  (void) pvParameters;

  for(;;)
  {
    
  }
  
}

static void TaskClock( void *pvParameters )
{
  (void) pvParameters;

  for(;;)
  {
    
  }
  
}*/
