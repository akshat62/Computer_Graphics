///////////////////////////////////////////////DDA LINE////////////////////////////////////////
//Run in TurboC

//Compile- Ctrl+F9

//libraries
#include<math.h>
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>

int main()
{
      //initialization & declaration
      int i=1, gdriver, gmode;
      float xin,yin;
      float pixel,x,y, dx,dy, x1,y1,x2,y2;
      gdriver=DETECT;
      
      //Graph Initialization
      //initgraph() in <graphics.h>
      //Path can vary according to the system
      initgraph(&gdriver, &gmode, "C:\\TurboC3\\bgi");
      
      printf("Enter the coordinates of 1st Point:");
      scanf("%f %f",&x1, &y1);
      
      printf("Enter the coordinates of 2nd Point:");
      scanf("%f %f",&x2, &y2);
      
      dx = abs(x2 - x1);
      dy = abs(y2 - y1);
      
      if(dx > dy)
      {
	      pixel = dx;

      }
      else
      {
	      pixel = dy;
      }
      
      xin = dx / pixel;
      yin = dy / pixel;
      
      x = x1;
      y = y1;
      
      //putpixel(int x1, int y1, int x2, int y2)
      putpixel(x, y, 15);
      
      while(i <= pixel)
      {
	      x = x + xin;
	      y = y + yin;
	      
	      //putpixel(int x1, int y1, int x2, int y2)
            putpixel(x, y, 15);
            
            i++;
            
            //to delaly the execution
            //delay(milli-seconds)
            delay(100);
      }
      
      //charater input
      //getch() in <conio.h>
      getch();
      
      closegraph();
      
      return 0;
}
