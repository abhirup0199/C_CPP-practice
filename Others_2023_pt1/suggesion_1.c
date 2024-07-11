#include<stdio.h>
int main()
{
    int a=3 , b=5 , c=8 , x;
    x=a+=b*=c-=5;
    printf("%d",x);
}