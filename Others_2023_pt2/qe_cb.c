#include<stdio.h>
#include<math.h>
int main()
	{
		int side1, side2, side3;
		double s , a;
		printf("Enter the value of 3 sides = ");
		scanf("%d%d%d",&side1,&side2,&side3);
		if(side1+side2>side3||side2+side3>side1||side1+side3>side2)
		{
			printf("valid triangle\n");

			if(side1==side2&&side2==side3&&side2==side3)
			{
				printf("equielatral triangle\n");
			}
			else if(side1==side2||side2==side3||side1==side3)
			{
				printf("isoseles triangle\n");
			}
			else
			{
				printf("scalene triangle\n");
			}
			s=(side1+side2+side3)/2;
			a=sqrt(s*(s-side1)*(s-side2)*(s-side3));
			printf("area of this triangle = %.2lf",a);
		}
		else
		{
			printf("invalid triangle");
		}
		return 0;
	}
