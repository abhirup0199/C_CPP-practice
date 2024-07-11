#include <stdio.h>

int main()
{
    int n1,n2,gcd;
    printf("Enter two numbers : \n");
    printf("x = ");
    scanf("%d",&n1);
    printf("y = ");
    scanf("%d",&n2);
    for(;n1!=n2;){
       gcd = (n1>n2)? (n1-=n2) : (n2-=n1);
    }
    printf("\nGCD=%d",gcd);
}