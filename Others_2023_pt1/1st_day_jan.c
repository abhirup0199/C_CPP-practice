#include<stdio.h>
int main(){
int year, year_gap, leap=0, total_day, ref_2=400, ref=1900, day;
printf("enter a year greater than 1900 = ");
scanf("%d",&year);
if(year>ref)
{
year_gap=year-ref;
for(;ref<year;ref++)
{
if(ref%400==0 || ref%100!=0 && ref%4==0)
{
leap++;
}
}
total_day=((year_gap-leap)*365)+(leap*366);
day=total_day%7;
switch(day)
{
case 0:
printf("Monday");
break;
case 1:
printf("Tuesday");
break;
case 2:
printf("Wednesday");
break;
case 3:
printf("Thursday");
break;
case 4:
printf("Friday");
break;
case 5:
printf("Saturday");
break;
case 6:
printf("Sunday");
break;
}
}
else if(ref>year>ref_2)
{
year_gap=year-ref_2;
for(;ref_2<year;ref_2++)
{
if(ref_2%400==0 || ref_2%100!=0 && ref_2%4==0)
{
leap++;
}
}
total_day=((year_gap-leap)*365)+(leap*366);
day=total_day%7;
switch(day)
{
case 0:
printf("Sunday");
break;
case 1:
printf("Monday");
break;
case 2:
printf("Tuesday");
break;
case 3:
printf("Wednesday");
break;
case 4:
printf("Thursday");
break;
case 5:
printf("Friday");
break;
case 6:
printf("Saturday");
break;
}
}
return 0;
}
