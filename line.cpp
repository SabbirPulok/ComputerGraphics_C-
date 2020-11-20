#include<stdio.h>
#include<graphics.h>
#include<conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm,"");
    line(100,200,300,200);
    getch();
    closegraph();
}
