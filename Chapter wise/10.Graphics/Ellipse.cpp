#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
	int gdriver = DETECT,gmode;
	initgraph(&gdriver,&gmode,(char*)"");
	ellipse(250,250,0,360,120,70);
	getch();
	closegraph();
	return 0;
}

