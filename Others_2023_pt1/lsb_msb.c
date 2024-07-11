#include<stdio.h>
int main()
{
    int num;
    printf("Enter a binary Number = ");
    scanf("%d",&num);
    if (num & 1)
    {
        printf("LSB is SET\n");
    }
    else
    {
        printf("LSB is not SET\n");
    }
    return 0;
}
