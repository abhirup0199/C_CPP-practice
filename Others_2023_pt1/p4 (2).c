//string compare
#include<stdio.h>
int main()
{
int i,result;
char str1[100],str2[100];
printf("\n Enter the first string: ");
fgets(str1,100,stdin);
printf("\n Enter the second string: ");
fgets(str2,100,stdin);
for(i=0;str1[i]==str2[i]&&str1[i]=='\0';i++);
if(str1[i]<str2[i])
{
printf("\n str1 is less than str2");
}
else if(str1[i]>str2[i])
{
printf("\n str1 is greater than str2");
}
else
{
printf("\n str1 is equal to str2");
}
return 0;
}
