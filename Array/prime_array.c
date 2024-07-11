#include<stdio.h>
int main()
{
	int a[100] , b , n , i , pn;
	printf("Enter the size of the array = ");
	scanf("%d",&b);
	printf("Enter the elements - ");
		for(i=0;i<b;i++)
		{
			scanf("%d\n",&a[i]);
		}
    	for(i=0;i<b;i++)
    		{
    			pn=1;
    			for(n=2;n<a[i];n++)
    				{
    					if(a[i]%n==0)
    						{
    							pn=0;
    							break;
    						}
    				}
    					if(pn!=0)
    						{
    							printf("%d\t",a[i]);
    							
    						}
    		}
			return 0;
}
