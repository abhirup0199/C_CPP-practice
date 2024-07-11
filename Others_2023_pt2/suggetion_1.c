#include<stdio.h>
int main()
{
int i, n, sum=0, num;
printf("renge = ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("enter a integer = ");
scanf("%d",&num);
if(num<0)
{
continue;
}
sum=sum+num;
}
printf("sum= %d",sum);
}
