#include<stdio.h>
#include<math.h>
int main()
    {
        int i,p;
        for ( i = 4; i < 10; i++)
        {
            printf("integer = %d\n",i);
            p=pow(i,2);
            printf("square of the integer = %d\n",p);
        }
        return 0 ;
    }