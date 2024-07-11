//Prime Number
#include<stdio.h>
int main(){
    int n,i,m=0,pn,a,b;
    printf("Enter the Range a to b = ");
    scanf("%d%d",&a,&b);
    for ( i = a; i < b; i++)
    {
        /* code */
        m=i/2;
        for ( n = 2; n < m; n++)
        {
            /* code */
            pn=1
            if ( i % n == 0)
            {
                /* code */
                pn=0;
                break;
            }
            if (pn!=0)
            {
                /* code */
                printf("%d\t",i);
                break;
            }
            
            
        }
        
    }
    return 0;
}