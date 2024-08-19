#include<iostream>
using namespace std;
//Greatest of three numbers
int main()
{
    int a,b,c;
    cout<<"Enter value of a , b , c = ";
    cin>>a>>b>>c;
    int max = (a>b)?((a>c)?a:c):((b>c)?b:c);
    cout<<"Max = "<<max<<endl;
}