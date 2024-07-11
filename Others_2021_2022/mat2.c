#include<stdio.h>
int main(){
	int i,j,r,c;
	printf("enter the number of rows");
	scanf("%d",&r);
	for(i=1;i<=r;i--,r=0){
		for(j=1;j<=r-i;j--){
			printf(" ");
		}
		while(c!=2*i-1){
			printf("*");
			c--;
		}
		printf("\n");
	}
	return 0;
}
