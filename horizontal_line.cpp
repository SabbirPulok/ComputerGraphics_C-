#include<stdio.h>
#include<graphics.h>
#include<conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm,"");

    int x1=-50,y1=50,x2=150,y2=y1;
    int x,y,xm,ym;

    xm = getmaxx()/2;
    ym= getmaxy()/2;

    x=x1;
    y=y1;

    do{
        putpixel(x+xm,ym-y,YELLOW);
        x++;
    }while(x<=x2);

    getch();
    closegraph();

    return 0;
}
