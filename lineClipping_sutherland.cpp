#include<stdio.h>
//#include<graphics.h>

const int INSIDE=0;
const int LEFT = 1;
const int RIGHT = 2;
const int TOP = 4;
const int BOTTOM = 8;


void sutherland(int x1, int y1, int x2, int y2, int xmax, int ymax, int xmin, int ymin)
{
    bool bit1,bit2,bit3,bit4;

    int code1, code2;


    if((y1-ymax)>0){bit1=1;} else{bit1=0;};
    if((ymin-y1)>0){bit2=1;} else{bit2=0;}
    if((x1-xmax)>0){bit3=1;} else{bit3=0;}
    if((xmin-x1)>0){bit4=1;} else{bit4=0;}

    code1 = (bit1) | (bit2<<1) | (bit3<<2) | (bit4<<3);

    printf("Region Code First Point : %d\n",code1);



    if((y2-ymax)>0){bit1=1;} else{bit1=0;};
    if((ymin-y2)>0){bit2=1;} else{bit2=0;}
    if((x2-xmax)>0){bit3=1;} else{bit3=0;}
    if((xmin-x2)>0){bit4=1;} else{bit4=0;}

    code2 = (bit1) | (bit2<<1) | (bit3<<2) | (bit4<<3);

    printf("Region Code Second Point : %d\n",code2);

    float m;
    m=(y2-y1)/(x2-x1);

    if(code1==0 && code2==0)
    {
        printf("Line is visible in window.\n");
    }
    else if(code1 & code2)
    {
            printf("Line is completely outside in window.\n");
    }
    else{
        printf("Partially Inside\n");
        float x,y;
        int code;
        if(code1!=0)
        {
            code=code1;
            if (code & TOP)
            {
                x = x1 +  (ymax - y1)/m;
                y = ymax;
            }
            else if (code & BOTTOM)
            {
                x = x1 + (ymin - y1) / m;
                y = ymin;
            }
            else if (code & RIGHT)
            {
                y = y1 + m * (xmax - x1);
                x = xmax;
            }
            else if (code & LEFT)
            {
                y = y1 + (xmin - x1)*m;
                x = xmin;
            }
            printf("X: %f\n",x);
            printf("Y: %f\n",y);

        }
        if(code2!=0)
            {
                code=code2;

            if (code & TOP)
            {
                x = x1 +  (ymax - y1)/m;
                y = ymax;
            }
            else if (code & BOTTOM)
            {
                x = x1 + (ymin - y1) / m;
                y = ymin;
            }
            else if (code & RIGHT)
            {
                y = y1 + m * (xmax - x1);
                x = xmax;
            }
            else if (code & LEFT)
            {
                y = y1 + (xmin - x1)*m;
                x = xmin;
            }
            printf("X: %f\n",x);
            printf("Y: %f\n",y);

        }

    }
}
int main()
{
    //int gd = DETECT, gm;
    //initgraph(&gd,&gm,"");
    int x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,x6,y6;
    int xmax,ymax,xmin,ymin;
    int nline;
    
    // x1=-3;
    // y1=1;

    // x2=2;
    // y2=6;

    printf("Enter x1 and y1: ");
    scanf("%d%d",&x1,&y1);
    printf("\nEnter x2 and y2: ");
    scanf("%d%d",&x2,&y2);

    if(x1>x2){ xmax=x1; xmin=x2;}
    else {  xmax=x2; xmin=x1;}

    if(y1>y2){ ymax=y1; ymin=y2;}
    else{ ymax=y2; ymin=y1;}

    printf("No of line: ");
    scanf("%d",&nline);

    for(int i=0; i<nline; i++)
    {
        printf("\nEnter x3 and y3: ");
        scanf("%d%d",&x3,&y3);
        // x3 = -4;
        // y3 = 2;

        printf("\nEnter x4 and y4: ");
        scanf("%d%d",&x4,&y4);
        // x4 = -1;
        // y4 = 7;

        sutherland(x3,y3,x4,y4,xmax,ymax,xmin,ymin);

    }
    // delay(200);
    // getch();
    // closegraph();
}
