#include<bits/stdc++.h>
#include<graphics.h>
#include<conio.h>
using namespace std;

int main()
{
	int gd = DETECT,gm;
	int i,dx,dy,steps,x1=5,x2=120,y1=4,y2=70,x,y;
	initgraph(&gd,&gm," ");
	cleardevice();
	///cin >> x1 >> y1 >> x2 >> y2;
	x = x1;
	y = y1;
	dx = x2 - x1;
	dy = y2 - y1;
	int p = (2 * dy) - dx;
	while(x <= x2){
		putpixel(x,y,WHITE);
		x++;
		if(p < 0){
			p = p + (2 * dy);
		}
		else{
			p = p + (2 * dy) - (2 * dx);
			y++;
		}
	}
	getch();
	closegraph();
	return 0;
}
