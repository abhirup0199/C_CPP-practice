#include<stdio.h>
int main()
{
int year, rem, _year;
printf("Enter The Year = ");
scanf("%d",&year);
if(year%100==0 && year%400==0 || year%100!=0 && year%4==0)
{

}
else{
if(year>1900)
{
rem=_year%7;
_year=year-1900;
switch(rem){
case 0:
printf("1st day of January is Monday");
break;
case 1:
printf("1st day of January is Tuesday");
break;
case 2:
printf("1st day of January is Wednesday");
break;
case 3:
printf("1st day of January is Thursday");
break;
case 4:
printf("1st day of January is Friday");
break;
case 5:
printf("1st day of January is Saturday");
break;
case 6:
printf("1st day of January is Sunday");
break;
}
}
else
{
rem=_year%7;
_year=1900-year;
switch(rem){
case 0:
printf("1st day of January is Monday");
break;
case 1:
printf("1st day of January is Tuesday");
break;
case 2:
printf("1st day of January is Wednesday");
break;
case 3:
printf("1st day of January is Thursday");
break;
case 4:
printf("1st day of January is Friday");
break;
case 5:
printf("1st day of January is Saturday");
break;
case 6:
printf("1st day of January is Sunday");
break;
}
}
}
return 0;
}
