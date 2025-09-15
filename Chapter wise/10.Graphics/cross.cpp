#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
	int gdriver = DETECT,gmode;
	initgraph(&gdriver,&gmode,(char*)"");
	line(70, 160, 250, 160); // Horizontal line
   	line(160, 70, 160, 250); // Vertical line
	getch();
	closegraph();
	return 0;
}

