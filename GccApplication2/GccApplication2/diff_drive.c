#include <avr/io.h>
void forward();
void backward();
void right();
void left();
void sright();
void sleft();
void PWM_init();
int main(void)
{
	DDRA=0b11111111;
	unsigned char duty=255;
	PWM_init();
	OCR1A=(int)(duty/2);
	OCR1B=(int)(duty/2);
	/* Replace with your application code */
	while (1)
	{
	}
}
void forward()
{
	PORTA=0b01010101;
}
void backward()
{
	PORTA=0b10101010;
}
void left()
{
	PORTA=0b00000101;
}

void right()
{
	PORTA=0b01010000;
}
void sleft()
{
	PORTA=0b10100101;
}
void sright()
{
	PORTA=0b01011010;
}
void PWM_init()
{
	TCCR1B=(0<<WGM13)|(1<<WGM12)|(1<<CS10);
	DDRB |= (1<<PB6)|(1<<PB5);
}
