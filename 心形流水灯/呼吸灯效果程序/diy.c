/****************************************
心形流水灯呼吸程序
此程序来自网络，后修改
**********************************************/
#include<reg52.h> 

int PWM_Low,Clock=400;//改变数值大小调节呼吸快慢

void delay (unsigned int i)
{
while(i--);
}


void main(void)
{
    while(1)
          {
            for(PWM_Low=Clock;PWM_Low>0;PWM_Low--) 
             {
                  P0=P1=P2=P3=0XFF;
                   delay(PWM_Low);
                  P0=P1=P2=P3=0X00;
                   delay(Clock-PWM_Low);
                 }
						 
            for(PWM_Low=0;PWM_Low<Clock;PWM_Low++)  
								 
                         {      P0=P1=P2=P3=0XFF;
                                delay(PWM_Low);
                               P0=P1=P2=P3=0X00;
                                delay(Clock-PWM_Low);
												 }
           }           
   }
