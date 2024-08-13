#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout<<"Value of A,B & C= ";
	cin>>a>>b>>c;
	if(a>b && a>c)
	cout<<"Greatest = "<<a;
	else if(b>a && b>c)
	cout<<"Greatest = "<<b;
	else if(c>a && c>b)
	cout<<"Greatest = "<<c;
	return 0;
}
