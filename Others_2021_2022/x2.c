#include<stdio.h>
int main(){
	int no,rem,rno=0;
	printf("Enter A 3 Dijit Number");
	scanf("%d",&no);
	while(no>0){
		rem=no%10;
		rno=(rno*10)+rem;
		no=no/10;
	}
	printf("the Reverse Number is%d",rno);
	return 0;
}
