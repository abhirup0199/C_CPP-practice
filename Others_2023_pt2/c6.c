#include<stdio.h>
int main(){
int num , rem , rno=0 ;
printf("Enter a value = ");
scanf("%d",&num);
while(num>0){
rem=num%10;
rno=(rno*10)+rem;
num=num/10;}
printf("Reverse Number = %d",rno);
return 0;
}
