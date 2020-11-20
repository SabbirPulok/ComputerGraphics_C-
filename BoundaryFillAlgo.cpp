#include<graphics.h>

void BoundaryFill(int x,int y, int fill_color, int boundary_color)
{

    if(getpixel(x,y)!=boundary_color && getpixel(x,y)!=fill_color)
    {
        putpixel(x,y,fill_color);
        BoundaryFill(x + 1, y, fill_color, boundary_color);
        BoundaryFill(x, y + 1, fill_color, boundary_color);
        BoundaryFill(x - 1, y, fill_color, boundary_color);
        BoundaryFill(x, y - 1, fill_color, boundary_color);
        BoundaryFill(x - 1, y - 1, fill_color, boundary_color);
        BoundaryFill(x - 1, y + 1, fill_color, boundary_color);
        BoundaryFill(x + 1, y - 1, fill_color, boundary_color);
        BoundaryFill(x + 1, y + 1, fill_color, boundary_color);
    }

}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm,"");

    int x=100,y=200,r=50;

    rectangle(100, 100, 200, 200);


    BoundaryFill(105, 105, 4, 15);
    delay(2000);
    getch();

    closegraph();

}
