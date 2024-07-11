#include<stdio.h>
int main(){
	int i,j,n;
	printf("Enter The Number of Lines : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++)
			printf("*");
			printf("\n");
	}
}
