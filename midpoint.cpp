#include<stdio.h>
#include<graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm,"");

    int xm,ym;
    //int x=50,y=20;
    xm=getmaxx()/2;
    ym=getmaxy()/2;

    putpixel(xm,ym,YELLOW);
    line(0,ym,xm+xm,ym);///horizontal line
    line(xm,0,xm,ym+ym);///vertical line

    int x=-250,y=-200;
    putpixel(xm+x,ym-y,YELLOW);
    line(-80+xm,ym+50,100+xm,ym-90);

    getch();
    closegraph();
}
