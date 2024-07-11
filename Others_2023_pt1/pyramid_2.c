#include<stdio.h>
int main()
{
	int n,i,j,a=2;
	printf("Enter a Number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",a);
			printf(" ");
	        if(i!=j)
	        {
	        	a=a+2;
		    }
	    }
	    a=a*2;
		printf("\n");
	}
	return 0;
}