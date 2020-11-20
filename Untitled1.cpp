#include<graphics.h>
#include<stdio.h>
#include<math.h>
#include<conio.h>

void main(){


float x,y,x1,y1,x2,y2,dx,dy,step;
int i,gd=DETECT,gm,k;

initgraph(&gd,&gm,"");

printf("x1 , y1?");
scanf("%f%f",&x1,&y1);

printf("x1 , y1?");
scanf("%f%f",&x2,&y2);

dx=abs(x2-x1);
dy=abs(y2-y1);

if(dx>=dy)
    step=dx;
else
    step=dy;

dx=dx/step;
dy=dy/step;

x=x1;
y=y1;

x=x1+0.5;
y=y1+0.5;

for(k=0;k<step;k++){
    x=x+x1;
    y=y+y1;
    putpixel(x,y);

}





}


