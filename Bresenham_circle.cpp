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

    int r;
    printf("Enter the radius: ");
    scanf("%d",&r);

    int x=0,y=r;
    int p=3-2*r;
    int count=0;
    while(x<=y)
    {

        printf("x: %d , y: %d\n",x,y);
       putpixel(xm+x,ym-y,YELLOW);//x,y

        //putpixel(-x+xm,ym-y,YELLOW);//x,-y
        putpixel(-x+xm,ym-y,YELLOW);
        putpixel(x+xm,ym+y,YELLOW);
        putpixel(-x+xm,ym+y,YELLOW);
        putpixel(y+xm,ym-x,YELLOW);
        putpixel(-y+xm,ym-x,YELLOW);
        putpixel(y+xm,ym+x,YELLOW);
        putpixel(-y+xm,ym+x,YELLOW);


        delay(100);

        if(p<=0)
        {
            p+=(4*x+6);
        }
        else
        {
            y--;
            p+=(4*(x-y)+10);
        }
        x++;

        count++;
    }

    printf("Total Point: %d",count);

    getch();
    closegraph();
}
