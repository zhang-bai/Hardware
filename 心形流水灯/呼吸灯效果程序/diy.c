/****************************************
������ˮ�ƺ�������
�˳����������磬���޸�
**********************************************/
#include<reg52.h> 

int PWM_Low,Clock=400;//�ı���ֵ��С���ں�������

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
