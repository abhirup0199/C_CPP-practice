#include<stdio.h>
char str_cpy (char destination , char source){
	destination=source;
	return destination ;
}
int main(){
	char str1[100] , str2[100] , str3[100];
	printf("Enter a string = ");
	scanf("%s",&str1);
	str3 = str_cpy(str2,str1);
	printf("%s",str2);
}
