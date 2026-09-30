#include <stdio.h>
#include <stdlib.h>

int main()
{

// declare variables
  double area;
 const double pi=3.142;
 double r;
 //request radius
 printf("please enter radius\n");//output
 scanf("%lf",&r);//input
 area=pi*r*r;
 printf("the area %lf",area);
 return 0;
}

