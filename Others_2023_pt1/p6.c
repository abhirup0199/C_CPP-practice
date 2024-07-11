//write a c programme to find out area of Perimeter
#include<stdio.h>
#define pi 3.14
#include<math.h>
int main()
{
float r,a,p;
printf("Enter the value of r:");
scanf("%f",&r);
a=pi*r;
p=pi*pow(r,2);
printf("ans of area and perimeter:%f%f",a,p);
}
