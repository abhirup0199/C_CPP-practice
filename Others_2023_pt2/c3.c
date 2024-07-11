//C program for leap year
#include<stdio.h>
int main()
{
int year;
printf("put year");
scanf("%d",&year);
if(year%100==0){
if(year%400==0){
printf("Leap Year");}
else{
printf("Not A Leap Year");}
}
else{
if(year%4==0){
printf("Leap Year");
}
else
{
printf("Not A Leap Year");}}
}
