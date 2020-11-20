#include<stdio.h>
#include<graphics.h>
#include<conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm,"");
    putpixel(100,200,RED);
    getch();
    closegraph();

    return 0;
}
