#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
	int gdriver = DETECT,gmode;
	initgraph(&gdriver,&gmode,(char*)"");
	line(25,110,220,110);
	getch();
	closegraph();
	return 0;
}

