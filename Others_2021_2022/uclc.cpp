#include<ctype.h>
#include<stdio.h>
int main(){
	char ch;
	ch='g';
	printf("%c in uppercase is ch",toupper(ch));
	int lower = ch;
	char c;
	c=lower+32;
	printf("\nlower case=%c",c);
	return 0;
}
