#include "Arduino.h"
#include "RelayControl.h"
#include "DrinkConfiguration.h"


void TaskRelayControl( void *pvParameters )
{
  (void) pvParameters;

  for(;;)
  {
	  
	  //TODO: State machine for different drinks here
	  
  digitalWrite(JUICE, HIGH); // turn on pump1 2 seconds
  delay(10000);
  digitalWrite(JUICE, LOW);  // turn off pump1 2 seconds
  delay(2000);

  /*digitalWrite(TONIC, HIGH); // turn on pump2 2 seconds
  delay(2000);
  digitalWrite(TONIC, LOW);  // turn off pump2 2 seconds
  delay(2000);*/
  
  }
  
}


void GT()
{
	
}
