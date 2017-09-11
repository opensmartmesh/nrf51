#include "mbed.h"

int main() 
{
  DigitalOut  myled(LED1);
  
  while(1) 
  {
      myled = 0;      // turn the LED on
      wait_ms(200);   // 200 millisecond
      myled = 1;      // turn the LED off
      wait_ms(1000);  // 1000 millisecond
  }
}
