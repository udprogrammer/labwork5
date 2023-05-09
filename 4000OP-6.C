#include<stdio.h>
#include<conio.h>
main()
{
 int x=3,y=12,z=6,xy;

 clrscr();
 xy= (x*x*x)-(y*y*y)-(z*z*z)-(3*(x+y))+(3*(y+z)+(3*(z+x)));
 printf("(x-y-z)3=%d",xy);

 getch();
 }