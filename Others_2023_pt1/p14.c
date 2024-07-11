#include<stdio.h>
int main()
{
int year=1900,leapyear=0,a,b,day,i;
printf("Enter the year");
scanf("%d",&year);
if(year>=1900)
{
for(i=1900;i<year;i++)
{
if(i%4==0&&i%100!=0)
	leapyear++;
 if(i%400==0)
	leapyear++;
	}

     
   a=(year-1900);
   
   day=(a-leapyear)*365+leapyear*366;
   }
   else
   {
   for(i=1900;i>year;i--)
{
if(i%4==0&&i%100!=0)
	leapyear++;
 if(i%400==0)
	leapyear++;
	}

     
   a=(1900-year);
   
   day=(a-leapyear)*365+leapyear*366;
   }
   
   b=day%7;
   switch(b)
   {
   case 0:
   printf("Monday");
   break;
   case 1:
   printf("tuesday");
   break;
   case 2:
   printf("wednesday");
   break;
   case 3:
   printf("thrusday");
   break;
   case 4:
   printf("friday");
   break;
   case 5:
   printf("saturday");
   break;
   case 6:
   printf("sunday");
   break;
   default:
   
   }
   return 0;
   }

