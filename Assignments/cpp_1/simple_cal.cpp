#include<iostream>
#include<stdlib.h>
using namespace std;
//Simple Calculator
int main()
{
    char op;
    for(int i = 0; i >= 0; i++)
    {
        cout<<"-----MENU-----"<<endl;
        cout<<"+ for Addition\n- for Substraction\n* for Multiplication\n/ for division\nq for Exit"<<endl;
        cout<<"Operator = ";
        cin>>op;

        switch(op)
        {
            case '+':
            {
                int a,b;
                cout<<"Enter two values = ";
                cin>>a>>b;
                cout<<"Sum = "<<a+b<<endl;
                break;
            }
            case '-':
            {
                int a,b;
                cout<<"Enter two values = ";
                cin>>a>>b;
                cout<<"Sub = "<<a-b<<endl;
                break;
            }
            case '*':
            {
                int a,b;
                cout<<"Enter two values = ";
                cin>>a>>b;
                cout<<"Mul = "<<a*b<<endl;
                break;
            }
            case '/':
            {
                float a,b;
                cout<<"Enter two values = ";
                cin>>a>>b;
                cout<<"Div = "<<a/b<<endl;
                break;
            }
            case 'q':
            {
                exit(0);
                break;
            }
            default:
            {
                cout<<"Wrong Operator"<<endl;
                break;
            }
        } 
    }
}