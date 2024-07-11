#include<stdio.h>
int main()
{
int n,c,s=0,m,i,f=1;
printf("ENTER A VALUE : ");
scanf("%d",&n);
m=n;
while(n>0)
{
c=n%10;
for(i=0;i<c;i++)
f=f*i;
s=s+f;
f=1;
n=n/10;
}
if(s==m)
printf("THE ENTERED NUMBER IS PETERSON NUMBER.");
else
printf("THE ENTERED NUMBER IS NOT A PETERSON NUMBER.");
}
