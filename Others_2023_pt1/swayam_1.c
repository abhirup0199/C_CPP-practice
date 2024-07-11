#include<stdio.h>
int main()
{
int N;
float sum = 0.0;
scanf("%d",&N);
int i=1;
for(;i<=N;i++)
{
  sum=sum+(float) 1/(float) i;
}
printf("Sum of the series is :%.2f",sum);
}