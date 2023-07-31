#include <LPC214X.H>
void delay(unsigned int time)
{
	unsigned int i,j;
	for(i=0;i<time;i++)
	{
		for(j=0;j<500;j++);
	}
}

int main()
{
	PINSEL1=0x00000000;
	IODIR0=(1<<18);
	while(1)
	{
		IOSET0 |=(1<<18);
		delay(1000);
		IOCLR0 |=(1<<18);
		delay(1000);
	}

	
}
