// This Arduino code was automatically generated by Aixt Project
// Device = Blue-Pill
// Board = Blue-Pill
// Backend = arduino

#define adc__read(PIN_NAME)   analogRead(PIN_NAME)
#define pin__output		OUTPUT
#define pin__input		INPUT
#define pin__in_pullup	INPUT_PULLUP
#define pin__high(PIN_NAME)   digitalWrite(PIN_NAME, HIGH)
#define pin__low(PIN_NAME)   digitalWrite(PIN_NAME, LOW)
#define pin__read(PIN_NAME)   digitalRead(PIN_NAME)
#define pin__setup(PIN_NAME, MODE)    pinMode(PIN_NAME, MODE)
#define pin__write(PIN_NAME, VALUE)   digitalWrite(PIN_NAME, VALUE)
#define pwm__map(MODE, VALUE,VALUE1,VALUE2,VALUE3)   map(MODE, VALUE,VALUE1,VALUE2,VALUE3)
#define pwm__write(PIN_NAME, MODE)   pwmWrite(PIN_NAME, MODE)

void main__init();

void adc__init();

void pin__init();

void pwm__init();

enum main____pin_names {
	rX = PA11,
	tX = PA10,
	p1 = PA0,
	p2 = PA1,
	p3 = PA2,
	p4 = PA3,
	p5 = PA4,
	p6 = PA5,
	p7 = PA6,
	p8 = PA7,
	p9 = PB0,
	p10 = PB1,
	p11 = PB10,
	p12 = PB11,
	p13 = PB12,
	p14 = PB13,
	p15 = PB14,
	p16 = PB15,
	p17 = PA8,
	p18 = PB3,
	p19 = PB4,
	p20 = PB5,
	p21 = PB6,
	p22 = PB7,
	p23 = PB8,
	p24 = PB9,
	p25 = PC13,
	recibe_dato,
	dato,
	envia_dato,
};

void main__init() {
	adc__init();
	pin__init();
	pwm__init();
	
}

void adc__init() {
}

void pin__init() {
}

void pwm__init() {
}

void setup() {
	main__init();
	pin__setup(p5, pin__input);
	pin__setup(p7, PWM);
	adc__read(p5);
	pwm__map(adc__read(p5), 4095, 0, 4095, 0);
	pwm__write(p7, PWM);
}
