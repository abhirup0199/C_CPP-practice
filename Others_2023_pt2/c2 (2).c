//C program using if else
#include<stdio.h>
int main(){
float Total_sales , Total_ammount , Bonus;
printf("Enter total sales ammount : ");
scanf("%f",&Total_sales);
//If total sale is greater than 1 cr then he will get 19% bonus of his total ammount
if(Total_sales>10000000){
Bonus=Total_sales*0.19;
Total_ammount=Total_sales+Bonus;
printf("Total Ammount : %f\n",Total_ammount);
printf("Bonus : %f",Bonus);
}
else
{
printf("No Bonus");
}
return 0;
}
