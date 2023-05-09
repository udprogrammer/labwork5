#include<stdio.h>
#include<conio.h>
main()
{

 int x=4,y=6,z=12,xy;
 clrscr();
 xy=(x*x)+(y*y)+(z*z)+ (2*(x*y)+(y*z)+(z*x));
 printf("XY=%d",xy);
 getch();
 }