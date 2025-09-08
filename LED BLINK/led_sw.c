#include<LPC21xx.h>
#define LED_1 1<<1
#define LED_2 1<<2
#define LED_3 1<<3
#define LED_4 1<<4
int main(){
IODIR0|=LED_1|LED_2|LED_3|LED_4;
while(1){
	if(((IOPIN0>>11)&1)==0)
	IOCLR0=LED_1;
	else
	IOSET0=LED_1;
	if(((IOPIN0>>12)&1)==0)
	IOCLR0=LED_2;
	else
	IOSET0=LED_2;
	if(((IOPIN0>>13)&1)==0)
	IOCLR0=LED_3;
	else
	IOSET0=LED_3;
	if(((IOPIN0>>14)&1)==0)
	IOCLR0=LED_4;
	else
	IOSET0=LED_4;
}
}
