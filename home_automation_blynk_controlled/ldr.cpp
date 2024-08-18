#include "ldr.h"
#include "Arduino.h"
#include "main.h"

void init_ldr(void)
{
   pinMode(GARDEN_LIGHT, OUTPUT);
   pinMode(LDR_SENSOR , INPUT);
   
}
void brightness_control(void)
{
  unsigned int adc_val;
  adc_val=analogRead(LDR_SENSOR);

   /*scale it down 0 t0 255 and reverse it 255 to 0*/
   adc_val = 255 - (adc_val/4);
   analogWrite(GARDEN_LIGHT, adc_val);
   delay(100);
  
}