#include<stdio.h>
int main(){
	int a , b , n , i , pn;
	printf("Enter the Range of a and b = ");
	scanf("%d%d",&a,&b);
	for(i=a;i<b;i++)
		{
			pn=1;
			for(n=2;n<i;n++)
				{
					if(i%n==0)
						{
							pn=0;
							break;
						}
					}
					if(pn!=0)
						{
							printf("%d\t",i);
							
						}
			}
			return 0;
	}
