#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
	int gdriver = DETECT,gmode;
	initgraph(&gdriver,&gmode,(char*)"");
	int points[] = { 150, 150,200,80,250,150,150,150};
	drawpoly(4,points);
	getch();
	closegraph();
	return 0;
}

