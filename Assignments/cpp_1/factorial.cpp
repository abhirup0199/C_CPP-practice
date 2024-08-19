#include<iostream>
using namespace std;
//Calculate Factorial
int main()
{
    int a, fact = 1;
    cout<<"Enter the value = ";
    cin>>a;
    if(a == 1)
    cout<<"Factorial = "<<1<<endl;
    else
    {
        for(int i = 2; i <= a; i++)
        {
            fact *= i;
        }
        cout<<"Factorial = "<<fact<<endl;
    }
}