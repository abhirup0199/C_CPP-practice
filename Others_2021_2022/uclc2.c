#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	int i,j;
	printf("enter a string:");
	gets(s);
	for(i=0;s[i]!='\0';i++){
		if(s[i]>='a'&&s[i]<='z'){
			s[i]=s[i]-32;
		}
	}
	printf("string in uppercase = %s",s);
	for (j=0;s[j]!='\0';j++)
	{
		if(s[j]>='A'&&s[j]<='Z'){
			s[j]=s[j]+32;
		}
	}
	printf("string in lowercase = %s",s);
	return 0;
}
