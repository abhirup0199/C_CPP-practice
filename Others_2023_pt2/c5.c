#include<stdio.h>
int main(){
int a , b ;
printf("Value of a and b = ");
scanf("%d\n%d",&a,&b);
a=a^b;
b=a^b;
a=a^b;
printf("Swaping Value of a and b = %d\n%d",a,b);
}
