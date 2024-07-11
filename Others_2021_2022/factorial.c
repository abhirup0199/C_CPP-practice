#include<stdio.h>
int main(){
	int n,rem,i,s=0,f=1;
	printf("enter a num : ");
	scanf("%d",&n);
	while(n>0){
		rem=n%10;
		for(i=0;i<rem;i++)
		f=f*i;
		s=f+s;
		n=n/10;
	}
	printf("factorial num : %d",f);
}
