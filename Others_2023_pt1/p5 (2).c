//string concatented
#include<stdio.h>
int main()
{
int i=0,j=0;
char str1[50],str2[50];
printf("\n Enter the first string: ");
fgets(str1,50,stdin);
printf("\n Enter the second string: ");
fgets(str2,50,stdin);
while(str1[i]!='\0')
i++;
while(str2[j]!='\0')
{
str1[i]=str2[j];
j++;
i++;
}
str1[i]!='\0';
printf("\n the concatented string is %s",str1);
return 0;
}
