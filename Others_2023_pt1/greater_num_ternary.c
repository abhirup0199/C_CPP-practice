#include<stdio.h>
int main(){
    int a , b , c , g;
    printf("Value of a , b , c = ");
    scanf("%d%d%d",&a,&b,&c);
    g=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("greatest = %d",g);
}