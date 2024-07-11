#include<stdio.h>
int main(){
	int paper1,paper2,paper3,marks;
	float per;
	printf("enter marks of paper 1 , 2 & 3 = ");
	scanf("%d%d%d",&paper1,&paper2,&paper3);
	marks = paper1+paper2+paper3;
	per=(marks/300)*100;
	if(marks>=270){
		printf("outstanding");
	}
	else if(marks>=240&&marks<270){
		printf("excellent");
	}
	else if(marks>=210&&marks<240){
		printf("very good");
	}
	else if(marks>=180&&marks<210){
		printf("good");
	}
	else if(marks>=120&&marks<180){
		printf("pass");
	}
	else
	{
		printf("fail");
	}
}
