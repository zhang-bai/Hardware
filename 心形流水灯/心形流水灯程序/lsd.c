#include<reg52.h>////定义头文件
void delay(unsigned int i)
{
	while(i--);
}//延时//
unsigned char i,q;//定义变量//
unsigned char led1[]={0x7f,0x3f,0x1f,0x0f,0x07,0x03,0x01,0x00};
unsigned char led2[]={0xfe,0xfc,0xf8,0xf0,0xe0,0xc0,0x80,0x00};
unsigned char led3[]={0x80,0xc0,0xe0,0xf0,0xf8,0xfc,0xfe,0xff};
unsigned char led4[]={0x01,0x03,0x07,0x0f,0x1f,0x3f,0x7f,0xff};
unsigned char led5[]={0x7f,0xbf,0xdf,0xef,0xf7,0xfb,0xfd,0xfe};
unsigned char led6[]={0x55,0x55,0x55,0x55,0x55,0x55,0x55,0x55};
unsigned char led7[]={0xaa,0xaa,0xaa,0xaa,0xaa,0xaa,0xaa,0xaa};
unsigned char led8[]={0x3f,0x9f,0xcf,0xef,0xf3,0xf9,0xfc,0xfe};
unsigned char led9[]={0x1f,0x8f,0x37,0xe3,0xf1,0xf8,0xf3,0xfe};
//********挨个亮****************
	void disp1()	
   { 			  
	//**********
	for (q=0;q<8;q++)	
	{
	P3=led5[q];delay(8000);
	P3=0xff;	
	}
	  for (q=0;q<8;q++)
	{
		P1=led5[q];delay(8000);
	P1=0xff;	
	}	
	  for (q=0;q<8;q++)
	{
		P0=led5[q];delay(8000);
	P0=0xff;	
	}	
	  for (q=0;q<8;q++)
	{
		P2=led5[q];delay(8000);
	P2=0xff;	
	}	
	//**************88
	for (q=0;q<8;q++)	
	{
	P3=led5[q];delay(6000);
	P3=0xff;	
	}
	  for (q=0;q<8;q++)
	{
		P1=led5[q];delay(6000);
	P1=0xff;	
	}	
	  for (q=0;q<8;q++)
	{
		P0=led5[q];delay(6000);
	P0=0xff;	
	}	
	  for (q=0;q<8;q++)
	{
		P2=led5[q];delay(6000);
	P2=0xff;	
	}
for (q=0;q<8;q++)	
	{
	P3=led5[q];delay(4000);
	P3=0xff;	
	}
	  for (q=0;q<8;q++)
	{
		P1=led5[q];delay(4000);
	P1=0xff;	
	}	
	  for (q=0;q<8;q++)
	{
		P0=led5[q];delay(4000);
	P0=0xff;	
	}	
	  for (q=0;q<8;q++)
	{
		P2=led5[q];delay(4000);
	P2=0xff;	
	}	
	for(i=0;i<3;i++)	
	{
for (q=0;q<8;q++)	
	{
	P3=led5[q];delay(2000);
	P3=0xff;	
	}
	  for (q=0;q<8;q++)
	{
		P1=led5[q];delay(2000);
	P1=0xff;	
	}	
	  for (q=0;q<8;q++)
	{
		P0=led5[q];delay(2000);
	P0=0xff;	
	}	
	  for (q=0;q<8;q++)
	{
		P2=led5[q];delay(2000);
	P2=0xff;	
	}		
	  }
      }
//************over*****************
//*********** 全部依此点亮*****************	
	void disp2()	
	{{{{
    for (i=0;i<2;i++)
{		
	  for (q=0;q<8;q++)	
	{
	P3=led1[q];delay(2000);
	}
	  for (q=0;q<8;q++)
	{
		P1=led1[q];delay(2000);		
	}	
	  for (q=0;q<8;q++)
	{
		P0=led1[q];delay(2000);		
	}	
	  for (q=0;q<8;q++)
	{
		P2=led1[q];delay(2000);		
	}	
	 P3=P1=P0=P2=0xff; }}
	  for (q=0;q<8;q++)	
	{
	P3=led1[q];delay(4000);	
	}
	  for (q=0;q<8;q++)
	{
		P1=led1[q];delay(4000);	
	}	
	  for (q=0;q<8;q++)
	{
		P0=led1[q];delay(4000);	
	}	
	  for (q=0;q<8;q++)
	{
		P2=led1[q];delay(4000);	
	}	
	 P3=P1=P0=P2=0xff; }
	  for (q=0;q<8;q++)	
	{
	P3=led1[q];delay(6000);	
	}
	  for (q=0;q<8;q++)
	{
		P1=led1[q];delay(6000);		
	}	
	  for (q=0;q<8;q++)
	{
		P0=led1[q];delay(6000);		
	}	
	  for (q=0;q<8;q++)
	{
		P2=led1[q];delay(6000);}	
	 P3=P1=P0=P2=0xff; }
	  for (q=0;q<8;q++)	
	{
	P3=led1[q];delay(8000);
	}
	  for (q=0;q<8;q++)
	{
		P1=led1[q];delay(8000);	
	}	
	  for (q=0;q<8;q++)
	{
		P0=led1[q];delay(8000);	
	}	
	  for (q=0;q<8;q++)
	{
		P2=led1[q];delay(8000);		
	}
delay(120000);
	for (q=0;q<8;q++)
	{
		P3=led3[q];
		P2=led4[q];
		delay(12000);}
	for (q=0;q<8;q++)
		{
		P1=led3[q];
		P0=led4 [q];
		delay(12000);}
	 P3=P1=P0=P2=0xff; }    
//********over***************
//************************	 
 void disp3()
 {
	 for(i=0;i<4;i++)
	 {
P3=P1=P0=P2=0x00;delay(40000);
P3=P1=P0=P2=0xff;delay(40000);  
	 }}
//************over************
 void disp4()	 
 {
	for (q=0;q<8;q++)	 
 {
	 P2=led2[q];
	 delay(6000);}
 for (q=0;q<8;q++)
	 {
	 P0=led2[q];
	 delay(6000);}
	 delay(120000);
	 for (q=0;q<8;q++)	
	 {
	 P3=led1[q];delay(6000);}
		 for (q=0;q<8;q++){
	 P1=led1[q];delay(6000);}
		 P0=P1=P2=P3=0xff;
 }
 /////
 void disp5()	
 {
	 for(i=0;i<10;i++)
 {
	 P3=P1=P0=P2=led6[q];
	 delay(12000);
	 P3=P1=P0=P2=~led6[q];
	 delay(12000);
 }
  P3=P1=P0=P2=0xff;
 }
//*******************************
  void disp6()
{
for(i=0;i<4;i++)
{
	for(q=0;q<8;q++)
	{
	P3=P1=P0=P2=led1[q];delay(6000);
	}
	for(q=0;q<8;q++)
		{
	P3=P1=P0=P2=led3[q];delay(6000);}	
	P3=P1=P0=P2=0xff;
	}}
//////***********************
 void disp7()
{	
	for(q=0;q<8;q++)
	{
		P3=led1[q];
		P2=led2[q];
	delay(12000);
	}
	for(q=0;q<8;q++)
	 {
	  P1=led1[q];
		P0=led2[q];
		delay(12000);
	 } 	
 }
//************************
 void disp8()
 {
	 for (i=0;i<5;i++  )
 { 
 P3=P1=P0=P2=0x00;
 {
 P1=P2=0xff;
	 P3=P0=0xff;delay(12000);
  P3=P0=0x00;delay(12000);
	 
	 	 P1=P2=0xff;delay(12000);
  P1=P2=0x00;delay(12000);
	 P3=P1=P0=P2=0xff;
 }}}
 //***************************
 ////////////
void disp9()	 		
	{     		
	  for (q=0;q<8;q++)	
	{
	P2=led2[q];delay(6000);
	}
	  for (q=0;q<8;q++)
	{
		P0=led2[q];delay(6000);	
	}	
	  for (q=0;q<8;q++)
	{
		P1=led2[q];delay(6000);	
	}	
	  for (q=0;q<8;q++)
	{
		P3=led2[q];delay(6000 );
	}	
	P3=P2=P1=P0=0x00;
	for(q=0;q<8;q++)
	 {
	  P3=led3[q];
		P2=led4[q];
		delay(12000);
	 }
	 	  	for(q=0;q<8;q++) 
{		
		P1=led3[q];
		P0=led4[q];
		delay(12000);}
	} 
//*******over****************
//************************	 
 void disp10 () 
{
	for(q=0;q<8;q++)
	{
		P1=led2[q];
		P0=led1[q];
	delay(7000);
	}
	for(q=0;q<8;q++)
	 {
	  P3=led2[q];
		P2=led1[q];
		delay(7000);
	 }	 
  	for(q=0;q<8;q++) 
{		
		P1=led4[q];
		P0=led3[q];
		delay(7000);
}
	  	for(q=0;q<8;q++) 
{		
		P3=led4[q];
		P2=led3[q];
		delay(7000);
}
}

 void disp11() 
 { 
	 for(i=0;i<3;i++)
	 {
 P3=P2=0x00;delay(10000);
 P3=P2=0xff;delay(10000);
 P0=P1=0x00;delay(10000);
 P0=P1=0xff;delay(10000);
	 

	 }}
//
//*************over***********
//***************************
void main()
{
	while(1)	////组合disp1();到	disp11();组成不同效果。可以自己尝试
	{	 
		disp1();//一个一个流
	  disp2();//全部流加速
    disp3();//全闪
		disp4();//爱心合成
		disp5();//间隔闪烁
	  disp6();//分四个流
	  disp7();
		disp8();//分四段闪烁
		disp11();//上下闪
		disp9();//合成加消失
	  disp10();	//合成加消失
    disp5();
		disp6();
    disp3();
		disp2();
	
		
	}
}

	
	
	




