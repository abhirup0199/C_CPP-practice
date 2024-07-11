//Prime Number
#include<stdio.h>
int main(){
    int n,i,m=0,pn=0;
    printf("Enter a Number=");
    scanf("%d",&n);
    m=n/2;
    if(n>1){
        for (i = 2; i < m; i++)
        {
            /* code */
            if (n%i==0)
            {
                /* code */
                printf("Not a Prime Number");
                pn=1;
                break;
            }

        }
        if (pn==0)
        {
            /* code */
            printf("Prime Number");
        }
    }
    else
    {
        /* code */
        printf("Not a Prime Number");
    }
    
    return 0;
    
    
}