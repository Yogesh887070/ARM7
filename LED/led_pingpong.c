#include<LPC21xx.h>
#include"delay.h"
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

