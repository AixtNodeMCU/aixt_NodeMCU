import time 
import pin
import adc 

pin.setup(d2)
pin.setup(d4)

for{
	if adc.read(a0) <= 500 {
		pin.high(d2)
		time.sleep(1)
		pin.low(d2)
		time.sleep(1)
	}
	else adc.read(a0) >=501 {
		pin.high(d4)
		time.sleep(1)
		pin.low(d4)
		time.sleep(1)
	}
	time.sleep(1)
}