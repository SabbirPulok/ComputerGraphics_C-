#include<stdio.h>
#include<graphics.h>
#include<math.h>

void wait_for_char()
{

    //Wait for a key press
    int in = 0;

    while (in == 0) {
        in = getchar();
    }
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm,NULL);

    float x1,x2,y1,y2,dx,dy,step=0,x=0,y=0,xin,yin;
    
    x1=20;
    y1=40;
    x2=50;
    y2=100;
    
    /*
    cin>>x1;
    cin>>y1;
    cin>>x2;
    cin>>y2;
    */

   delay(200);
    // printf("Give input X1:");
    // scanf("%f",&x1);

    // printf("Give input Y1:");
    // scanf("%f",&y1);

    // printf("Give input X2:");
    // scanf("%f",&x2);
    
    // printf("Give input Y2:");
    // scanf("%f",&y2);
    //wait_for_char();

    delay(1000);
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


    for(int k=0;k<step;k++)
    {
        x = x+xin;
        y = y+yin;
        //printf("X = %f, Y = %f\n",x,y);
        putpixel(x,y,RED);
        delay(100);
    }

    getch();
    delay(5000);
    wait_for_char();
    closegraph();
    return 0;
}
