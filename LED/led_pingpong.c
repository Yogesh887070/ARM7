#include<LPC21xx.h>
void delay_ms(unsigned int);

void delay_ms(unsigned int ms){
T0PR=15000-1;
T0TCR=0x01;
while(T0TC<ms);
T0TCR=0x03;
T0TCR=0x00;
}

int main(){
 int i,j;

while(1)
{
IODIR0=0xff;
 
for(i=0;i<8;i++)
{
IOSET0=1<<i;
delay_ms(60);
IOCLR0=1<<i;
}
 
for(j=6;j>=0;j--)
{
IOSET0=1<<j;
delay_ms(60);
IOCLR0=1<<j;
      }
   }
}


