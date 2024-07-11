#include<stdio.h>
int main()
{
	int no,rem,amn=0;
	printf("enter num : ");
	scanf("%d",&no);
	while(no>0){
		rem=no%10;
		amn=(rem*rem*rem)+amn;
		no=no/10;
	}
	printf("number: %d",amn);
}
