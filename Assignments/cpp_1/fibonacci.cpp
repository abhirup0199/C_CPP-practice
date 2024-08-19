#include<iostream>
using namespace std;
//Fibonacci Series
int main()
{
    int n;

    cout<<"Enter the value of n = ";
    cin>>n;

    int *fib = new int[n+2];
    fib[0] = 0;
    fib[1] = 1;

    if(n <= 1)
    cout<<"Ans = "<<fib[n]<<endl;

    else{
        for(int i = 2; i <= n; i++)
        {
            fib[i] = fib[i-1]+fib[i-2];
        }
        cout<<"Ans = "<<fib[n]<<endl;
    }
}