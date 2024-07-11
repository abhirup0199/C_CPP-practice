//string length
#include<stdio.h>
int main()
{
int i;
char str1[100];
printf("Enter the first string: \n");
fgets(str1,100,stdin);
for(i=0;str1[i]!='\0';i++);
printf("the length of the string is(including null):%d",i);
return 0;
}
