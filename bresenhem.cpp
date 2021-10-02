#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
void main()
{
 int gd=DETECT,gm;
 float wy,wx,x1,y1,x2,y2;
 int i,thickness;
 initgraph(&gd,&gm,"");
 printf("Enter x1,y1,x2,y2:\n");
 scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
 printf("\nEnter thickness of line: ");
 scanf("%d",&thickness);
 bline(x1,y1,x2,y2);
 if((y2-y1)/(x2-x1)<1)
 {
 wy=(thickness-1)*sqrt(pow((x2-x1),2)+pow((y2-y1),2))/(2*fabs(x2-x1));
 for(i=0;i<wy;i++)
 {
 bline(x1,y1-i,x2,y2-i);
 bline(x1,y1+i,x2,y2+i);
 }
 }
 else
 {
 wx=(thickness-1)*sqrt(pow((x2-x1),2)+pow((y2-y1),2))/(2*fabs(y2-y1));
 for(i=0;i<wx;i++)
 {
 bline(x1-i,y1,x2-i,y2);
 bline(x1+i,y1,x2+i,y2);
 }
 }
 getch();
 closegraph();
 restorecrtmode();
}
void bline(float x1,float y1,float x2,float y2)
{
 float xinc,yinc,x,y;
 float dx,dy,e;
 dx=abs(x2-x1);
 dy=abs(y2-y1);
 if(x1<x2)
 xinc=1;
 else
 xinc=-1;
 if(y1<y2)
 yinc=1;
 else
 yinc=-1;
 x=x1;
 y=y1;
 putpixel(x,y,WHITE);
 if(dx>=dy)
 {
 e=(2*dy)-dx;
 while(x!=x2)
 {
 if(e<0)
 {
 e+=(2*dy);
 }
 else
 {
 e+=(2*(dy-dx));
 y+=yinc;
 }
 x+=xinc;
 putpixel(x,y,WHITE);
 }
 }
 else
 {
 e=(2*dx)-dy;
 while(y!=y2)
 {
 if(e<0)
 {
 e+=(2*dx);
 }
 else
 {
 e+=(2*(dx-dy));
 x+=xinc;
 }
 y+=yinc;
 putpixel(x,y,WHITE);
 }
 }
}

