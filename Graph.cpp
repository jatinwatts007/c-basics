#include<math.h>
#include"graphics.h"

const int WIDTH = 800, HEIGHT=600;

// lets write method to draw horizontal X and vertical Y

void drawLine(int moveToX, int moveToY,int drawX,int drawY, int color, int textX, int textY,char *name)
{
	moveto(moveToX, moveToY);
	setcolor(color);
	lineto(drawX, drawY);
	outtextxy(textX,textY,name);
} 

int main()
{
	double x,y;
	initwindow(WIDTH, HEIGHT);
	moveto(WIDTH / 2,HEIGHT / 2); // move cursor to center 
	// let's draw function 
	for(x=0;x<WIDTH;x+=0.01)
	{
		y=pow(x,4);
		setcolor(14);
		lineto(WIDTH /2+(x*100),HEIGHT / 2 - (y*100));
	}
	moveto(WIDTH / 2, HEIGHT / 2);

	// lets's write  second function
	for(x=0;x<WIDTH;x+=0.01)
	{
		y= pow(x,1./3.);
		lineto(WIDTH / 2 +(x*100),HEIGHT / 2 - (y*100));
	}

	// and our x and y lines

	drawLine(0,HEIGHT / 2,WIDTH,HEIGHT / 2,WHITE,WIDTH-20,HEIGHT / 2 + 10,"X");
	drawLine(WIDTH / 2,0,WIDTH / 2,HEIGHT,WHITE,WIDTH / 2 + 10,0,"Y");


	getch();
	closegraph();
	system("PAUSE");
	return 0;
}
