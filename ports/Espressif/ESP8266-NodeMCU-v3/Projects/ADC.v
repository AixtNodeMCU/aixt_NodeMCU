import time 
import pin
import adc 

pin.setup(d2 pin.output)
pin.setup(d3 pin.output)

for{
	if adc.read(a0) < 500 {
		pin.high(d2)
		time.sleep(1)
		pin.low(d2)
		time.sleep(1)
	}
	else if adc.read(a0) >501 {
		pin.high(d3)
		time.sleep(1)
		pin.low(d3)
		time.sleep(1)
	}
	time.sleep(1)
}