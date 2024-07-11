//Greatest Between three numbers
#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the Value of a,b,c");
scanf("%d%d%d",&a,&b,&c);
if (a>b && a>c)
printf("the greatest value of %d",a);
if (b>c && b>a)
printf("the greatest value of %d",b);
if (c>a && c>b)
printf("the greatest value of %d",c);
if (a==b && b==c)
printf("The three number is equal");
return 0;
}
