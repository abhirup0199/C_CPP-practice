#include<stdio.h>
#include<stdlib.h>

int main( int argc , char *argv[] )
{
	int val1 , val2 , sum;
	val1=atoi(argv[1]);
	val2=atoi(argv[2]);
	sum = val1+val2;
	printf("\n%d+%d=%d",val1,val2,sum);
	return(0);
}
