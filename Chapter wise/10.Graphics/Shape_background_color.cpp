#include <stdio.h>
#include <conio.h>
#include <graphics.h>
int main()
{
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, (char*)"");
    setbkcolor(BLUE);
    cleardevice(); 
    setcolor(WHITE);
    // circle
    int circleX = 100, circleY = 100, circleRadius = 50; // Top-left
    circle(circleX, circleY, circleRadius);
    // rectangle
    int rectLeft = 250, rectTop = 50, rectRight = 400, rectBottom = 150; //       Top-center
    rectangle(rectLeft, rectTop, rectRight, rectBottom);
    // ellipse
    int ellipseX = 300, ellipseY = 300;
    int horizontalRadius = 120, verticalRadius = 60; // Bottom-center
    ellipse(ellipseX, ellipseY, 0, 360, horizontalRadius, verticalRadius);
    getch(); 
    closegraph(); 
    return 0;
}

