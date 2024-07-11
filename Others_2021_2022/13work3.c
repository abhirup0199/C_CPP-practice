#include<stdio.h>
int main(){
	int i,x,l,j=1;
	if(x>l)
	for(i=x;i%l!=0;i>j){
		i=l;
		l=i%l;
	}
	printf("GCD: %d",l);
	else
	for(i=l;i%x!=0;i=j)
	j=x;
	x=i%x;
	printf("GCD: %d",x);
}
