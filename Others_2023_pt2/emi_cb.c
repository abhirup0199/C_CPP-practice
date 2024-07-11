#include<stdio.h>
#include<math.h>
int main(){
	int p , n ;
	float emi , r ;
		printf("Principal Ammount : ");
			scanf("%d",&p);
		printf("\nRate of Interest : ");
			scanf("%f",&r);
		printf("\nTenure (in months) : ");
			scanf("%d",&n);
				r=r/(12*100);
				emi=p*r*pow((1+r),n)/(pow((1+r),n)-1);
					printf("EMI = %f",emi);
	return 0;
	}
