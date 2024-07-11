#include<stdio.h>
int main(){
	int no,rem,rno=0,a;
	printf("Enter A 3 Dijit Number");
	scanf("%d",&no);
	no=a;
	while(no>0){
		rem=no%10;
		rno=(rno*10)+rem;
		no=no/10;
	}
	if(rno==a)
	printf("The Number is Palindrom");
	else
	printf("The Number is Not Palindrom");
	return 0;
}
