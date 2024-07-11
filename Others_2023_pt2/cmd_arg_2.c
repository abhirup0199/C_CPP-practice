#include<stdio.h>
#include<stdlib.h>

int main( int argc , char *argv[] )
{
	int val1 , sum=0;
	float per;
	printf("Name=%s",argv[1]);
	for(int i=2 ; i<=6 ; i++)
	{
		val1=atoi(argv[i]);
		sum = sum+val1;
	}
	printf("\n Total marks = %d",sum);
	per=((float) sum/(float) 500)*100;
	printf("\n Percentage = %f",per);
	return(0);
}
