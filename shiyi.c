#include<reg51.h>
sbit R1=P3^0;//??????(????????,????????????,??????)
sbit R2=P3^1;//??????
sbit R3=P3^2;//??????
sbit R4=P3^3;//??????

sbit C1=P4^4;//??????(???????)
sbit C2=P4^2;//??????
sbit C3=P3^5;//??????
sbit C4=P3^4;//??????
uchar wei=7;
uchar count1=0;
uchar count2=0;
uchar count3=0;
uchar count4=0;
void Init()//???????
{
	R1=R2=R3=R4=1;
	C1=C2=C3=C4=1;
}
void Scan_keys()
{
	C1 = C2 = C3 = C4 = 1;
	if(C1 == 0)
	{
		delay_ms(50);
		if(C1 == 0)
		{
			shumaguan_control(wei,0);
		}
		while(C1 == 0);
	}
	else if(C2 == 0)
	{
		delay_ms(50);
		if(C2 == 0)
		{
				shumaguan_control(wei,1);
		}
		while(C2 == 0);
	}
	else if(C3 == 0)
	{
	delay_ms(50);
		if(C3 == 0)
		{
				shumaguan_control(wei,2);
		}
		while(C3 == 0);
	}
	else if(C4 == 0)
	{
		delay_ms(50);
		if(C4 == 0)
		{
				shumaguan_control(wei,3);
		}
		while(C4 == 0);
	}
}
void main()
{
	while(1)
	{
		Init();
		R1=0;
		Scan_keys();
		
	}
}
