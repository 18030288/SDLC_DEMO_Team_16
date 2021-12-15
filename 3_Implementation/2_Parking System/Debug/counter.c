#include<reg51.h>
sbit com1=P1^0;
sbit com2=P1^1;
void main()
{
unsigned char disp[10] = {0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};
unsigned char v1,v3,v4;
unsigned int v2;
com1=com2=0;
P2=0x00;
TMOD=0X60;
TL1=0X00;
TR1=1;
 while(1)
 {
	 v1=TL1;
	 v3=v1&0x0f;
	 v4=(v1&0xf0)>>4;
	 com1=1;com2=0;
	 P2=disp[v4];
	 for(v2=0;v2<500;v2++);
	 com1=0;com2=1;
	 P2=disp[v3];
	 for(v2=0;v2<500;v2++);
	 com2=0;
 }
	
}