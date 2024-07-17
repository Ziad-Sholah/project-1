#include <stdio.h>
#include <stdlib.h>

int main()
{
   double pi;
   double r;
   double area;
   printf("enter the raduis of circle \n");
   scanf("%lf",&r);
   pi=3.14;
   area=pi*r*r;
   printf("the area of circle = %lf",area);

    return 0;
}
