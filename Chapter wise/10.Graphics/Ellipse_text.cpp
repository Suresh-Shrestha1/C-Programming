#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
	int gdriver = DETECT,gmode;
	initgraph(&gdriver,&gmode,(char*)"");
	ellipse(220,220,0,360,140,90);
	outtextxy(180,180,"Hello, World!");
	getch();
	closegraph();
	return 0;
}

