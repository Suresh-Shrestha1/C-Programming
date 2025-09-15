#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
	int gdriver = DETECT,gmode;
	initgraph(&gdriver,&gmode,(char*)"");
	rectangle(200,90,390,200);
	getch();
	closegraph();
	return 0;
}

