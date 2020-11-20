
#include<stdio.h>
#include<graphics.h>
#include<math.h>

void dda(float x1,float y1, float x2, float y2)
{
    float dx,dy,step=0,x=0,y=0,xin,yin;

    dx=abs(x2-x1);
    dy=abs(y2-y1);

    if(dx >= dy)
    {
        step = dx;
    }
    else
    {
        step = dy;
    }

    xin = dx/step;
    yin = dy/step;

    x = x1;
    y = y1;

    printf("DDA\n");

    for(int k=0;k<step;k++)
    {
        x = x+xin;
        y = y+yin;
        printf("%f %f\n",x,y);
        putpixel(x,y,RED);
        delay(100);
    }


}

void breshnam(float x1,float y1, float x2, float y2)
{
    float dx,dy,p,x,y;
    dx=(x2-x1);
    dy=y2-y1;

    p=2*dy-dx;

    x=x1;
    y=y1;
    printf("Breshnam\n");
    do{
        putpixel(x,y,BLUE);
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
}
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm,"");

    float x1,y1,x2,y2;
    /*
    x1=20;
    y1=40;
    x2=50;
    y2=100;
    */
    /*
    cin>>x1;
    cin>>y1;
    cin>>x2;
    cin>>y2;
    */


    printf("Give input X1:");
    scanf("%f",&x1);

    printf("Give input Y1:");
    scanf("%f",&y1);

    printf("Give input X2:");
    scanf("%f",&x2);

    printf("Give input Y2:");
    scanf("%f",&y2);

    dda(x1,y1,x2,y2);
    breshnam(x1,y1,x2,y2);

    closegraph();
    return 0;
}
