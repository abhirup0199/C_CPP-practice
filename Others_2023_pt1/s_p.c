#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float root(float z)
	{
		float r=sqrt(z);
		return r;
	}
	
float cube(float x)
	{
		float y=x*x*x;
		return y;
	}
	
int main()
	{
		int v;
		float a,b,c;
		for(int i=0 ; i>=0 ; i++ )
			{
				printf("Enter the value of a = ");
				scanf("%f",&a);
				printf("1=square root\n");
				printf("2=cube\n");
				printf("3=exit\n");
				printf("Enter the operator :");
				scanf("%d",&v);
				
				b=cube(a);
				c=root(a);
				
				switch(v)
					{
						case 1:
						printf("The Square Root of %.2f is %.2f\n",a,c);
						break;
						case 2:
						printf("The Cube of %.2f is %.2f\n",a,b);
						break;
						case 3:
						exit(0);
						default :
						printf("wrong input");
						break;
					}
			}
	}
