////////////////////////////////BOUNDARY FILL////////////////////////////////
//Run in TurboC

//Compile- Ctrl+F9

//libraries
#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void BoundaryFill(int, int, int, int);

int main()
{

      /*
            xc- x center coordiante of circle
            yc- y center coordiante of circle
            r- radius of circle
      */
      
      //initialization
      int xc, yc, r, gdriver, gmode;
      
      //declaration
      gdriver=DETECT;
      
      //Graph Initialization
      //initgraph() in <graphics.h>
      //Path can vary according to the system
      initgraph(&gdriver, &gmode, "C:\\TurboC3\\bgi");
      
      printf("Enter the coordinates of the center of the circle: ");
      scanf("%d %d",&xc, &yc);
      
      printf("Enter the radius of the circle: ");
      scanf("%d", &r);
      
      setcolor(BLUE);
      
      //circle(int xCenter, int yCenter, int Radius)
      circle(xc, yc, r);

      //to delaly the execution
      //delay(milli-seconds)
      delay(80);
      BoundaryFill(xc, yc, RED, BLUE);
      
      //charater input
      //getch() in <conio.h>
      getch();
      
      closegraph();

      return 0;
}

void BoundaryFill(int x, int y, int fill, int bound)
{
      int c=getpixel(x, y);
      if(c! = bound && c! = fill)
      {
            putpixel(x, y, fill);
            BoundaryFill(x, y+1, fill, bound);
            BoundaryFill(x, y-1, fill, bound);
            BoundaryFill(x-1, y, fill, bound);
            BoundaryFill(x+1, y, fill, bound);
      }
}
