#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
	int gdriver = DETECT,gmode;
	initgraph(&gdriver,&gmode,(char*)"");
	int x = 300;
	int y = 300;
	circle(x,y,70);
	circle(x,y,110);
	circle(x,y,150);
	getch();
	closegraph();
	return 0;
}

