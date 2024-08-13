#include<iostream>
using namespace std;
class cons{
    public:
    int val;

    cons()
    {
        val = 0;
    }
    cons(int a, int b)
    {
        val = a*b;
    }
    cons(int a, int b, int c)
    {
        val = a*b*c;
    }
    void display()
    {
        cout<<val<<endl;
    }
};

int main()
{
    cons ob2(13,67), ob3(25, 26, 28), ob;
    ob2.display();
    ob3.display();
    ob.display();
    return 0;
}