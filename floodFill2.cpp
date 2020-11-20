#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void flood(intx,inty,intfillColor, intdefaultColor)
{
    if(getpixel(x,y)==defaultColor)
    {
        delay(1);
        putpixel(x,y,fillColor);
        flood(x+1,y,fillColor,defaultColor);
        flood(x-1,y,fillColor,defaultColor);
        flood(x,y+1,fillColor,defaultColor);
        flood(x,y-1,fillColor,defaultColor);
    }
}
int main()
{
	int gd, gm = DETECT;
	initgraph(&gd, &gm, "");

	int top, left, bottom, right;

	top = left = 50;
	bottom = right = 300;

	rectangle(left, top, right, bottom);

	int x = 51;
	int y = 51;
	int newcolor = 6;
	int oldcolor = 8;

	flood(x, y, newcolor, oldcolor);
	getch();

	return 0;
}
