#include<graphic.h>
 void main ()
 {
 	int gd = DETECT,gm;
 	initgraph(&gd, &gm ,(cahr*)"" );
 	circle(320,240,200);
 	getch();
 	closegraph();
 }
