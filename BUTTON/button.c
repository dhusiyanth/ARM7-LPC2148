#include <LPC214X.H>
#define button (1<<16)
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
	PINSEL0=0x00000000;
	PINSEL1=0x00000000;
	PINSEL2=0x00000000;
	IO1DIR = ~(1<<16);
	IO0DIR |=(1<<16);
	while(1)
	{
		if((IO1PIN&button)==0)
		{
			IOSET0 |=(1<<16);
		}
		else
		{
			IOCLR0 |=(1<<16);
			}
	}
}
