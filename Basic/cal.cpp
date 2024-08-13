#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int op;
	float a, b;
	float sum, Sub, Mul, div;
	cout<<"1. Sum\n2. Sub\n3. Mul\n4. Div\n";
	cout<<"Enter the operator ";
	cin>>op;
	switch(op){
		case 1 :
		cin>>a>>b;
		sum = a+b;
		cout<<"Sum = "<<sum;
		break;
		case 2 :
		cin>>a>>b;
		Sub = a-b;
		cout<<"Substraction = "<<Sub;
		break;
		case 3 :
		cin>>a>>b;
		Mul = a*b;
		cout<<"Multiplication = "<<Mul;
		break;
		case 4 :
		cin>>a>>b;
		div = a/b;
		cout<<"Division = "<<div;
		break;
		default :
		cout<<"Wrong Input";
		break;
	}
	
}
