#include<8051.h>

void delay(){
	int i = 0;
	for(i=0;i<20;i++);
}

void main()
{
/* Insert your code here. */
while (1){
P2 = 0x00;
delay();
P2 = 0XFF;
delay();
}
}
