//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
int main()
{
double height,breadth,depth,volume;
printf("Enter height ");
scanf("%lf",&height);
printf("Enter breadth ");
scanf("%lf",&breadth);
printf("Enter depth ");
scanf("%lf",&depth);
volume=((height*depth)+depth)/(3*breadth);
printf("volume of tromboloid is  %lf",volume);
return 0;
}
