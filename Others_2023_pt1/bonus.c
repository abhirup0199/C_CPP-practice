//c program for dealer bonus calculation
#include<stdio.h>
int main()
{
    float TOTAL_SALES , BONUS , TOTAL_AMMOUNT ;
    printf("Enter The Total Sales Ammount(LACS) = ");
    scanf("%f",&TOTAL_SALES);
    //IF TOTAL SALE IS AVOBE 1 CR THEN HE WILL GET 20% OF HIS SALES AMMOUNT AS BONUS ELSE HE WILL GET 10% BONUS
    if (TOTAL_SALES>100)
    {
        /* code */
        BONUS=TOTAL_SALES*.2;
        TOTAL_AMMOUNT=TOTAL_SALES+BONUS;
        printf("FINAL AMMOUNT(LACS)=%f\n",TOTAL_AMMOUNT);
        printf("BONUS APPLIED(LACS)=%f",BONUS);
    }
    else
    {
        /* code */
        BONUS=TOTAL_SALES*.1;
        TOTAL_AMMOUNT=TOTAL_SALES+BONUS;
        printf("FINAL AMMOUNT(LACS)=%f\n",TOTAL_AMMOUNT);
        printf("BONUS APPLIED(LACS)=%f",BONUS);
    }
    
    return 0;
}
