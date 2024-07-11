#include<stdio.h>
int main(){
	int a1,a2,a3,i,j,k;
	printf("enter ages of ram,shyam,ajay: ");
	scanf("%d%d%d",&a1,&a2,&a3);
	i=a1-a2;
	j=a2-a3;
	k=a3-a1;
	if(i<0&&k>0)
	printf("ram youngest");
	if(i>0&&j<0)
	printf("shyam youngest");
	if(j>0&&k<0)
	printf("ajay youngest");
}
