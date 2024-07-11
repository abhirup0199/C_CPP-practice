#include<stdio.h>
#include<math.h>
int main(){
    int num , count = 0 , rem , arm = 0 , de , new ;
    printf("Enter a number greater than 0 = ");
    scanf("%d",&num);

    de = num ;
    new = num ;

    while (num>0)
    {
        count++;
        num=num/10;
        
        
    }

    while (new>0)
    {
        rem=new%10;
        arm=arm+pow(rem,count);
        new=new/10;
    }
    
    if (de == arm)
    {
        printf("Armstrong Number\n");
        printf("Number = %d\n",de);
        printf("Armstrong Number = %d\n",arm);
    }
    else
    {
        printf("Not Armstrong Number\n");
        printf("Number = %d\n",de);
        printf("Armstrong Number = %d\n",arm);
    }
    
    return 0 ;

}