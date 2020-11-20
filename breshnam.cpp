#include<stdio.h>
#include<graphics.h>
#include<math.h>


int main()
{
    int gm,gd = DETECT;
    initgraph(&gd,&gm,"");


    float x,y,x1,x2,y1,y2,dx,dy,p;
    int xm,ym;
    xm = getmaxx()/2;
    ym = getmaxy()/2;
      x1=20,y1=20, x2=200,y2=220;


    // printf("Give input X1:");
    // scanf("%f",&x1);

    // printf("Give input Y1:");
    // scanf("%f",&y1);

    // printf("Give input X2:");
    // scanf("%f",&x2);

    // printf("Give input Y2:");
    // scanf("%f",&y2);


    dx=(x2-x1);
    dy=y2-y1;

    p=2*dy-dx;

    x=x1;
    y=y1;
    do{
        putpixel(x+xm,ym-y,GREEN);
        delay(100);
        printf(" x: %f, y: %f\n",x,y);
        if(p<0)
        {
            p=p+2*y;
            x=x+1;
        }
        else
        {
        p=p+2*dy-2*dx;
        x=x+1;
        y=y+1;
        }
    }while(x<=x2);

     getch();
    closegraph();
    return 0;
}
