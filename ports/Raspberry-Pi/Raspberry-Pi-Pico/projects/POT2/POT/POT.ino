#include "C:\Users\Anderson\Desktop\RASPBERRY PI PICO\aixt-rp-2040\ports\Raspberry-Pi\Raspberry-Pi-Pico\api/builtin.c"
#include "C:\Users\Anderson\Desktop\RASPBERRY PI PICO\aixt-rp-2040\ports\Raspberry-Pi\Raspberry-Pi-Pico\api/machine/pin.c"
#include "C:\Users\Anderson\Desktop\RASPBERRY PI PICO\aixt-rp-2040\ports\Raspberry-Pi\Raspberry-Pi-Pico\api/time/sleep_ms.c"
int val;
void setup() {

pin_mode(led1, out);
pin_mode(led2, out);
pin_mode(led3, out);
pin_mode(led4, out);
 }

void loop() {

val=adc_read(pot);
  
if (val>=0,val<255) {
pin_high(led1);
pin_low(led2);
pin_low(led3);
pin_low(led4);
}

if (val>=255,val<511) {
pin_low(led1);
pin_high(led2);
pin_low(led3);
pin_low(led4);
}

if (val>=511,val<767) {
pin_low(led1);
pin_low(led2);
pin_high(led3);
pin_low(led4);
}

if (val>=767,val<1023) {
pin_low(led1);
pin_low(led2);
pin_low(led3);
pin_high(led4);
}

}