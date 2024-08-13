#include<iostream>
using namespace std;
class cons{
    public:
    int a, b;
    
    cons()
    {
        cout<<"Default Constructor"<<endl;
    }
    cons(int a, int b)
    {
        cout<<"First Value = "<<a<<endl;
        cout<<"First Value = "<<b<<endl;
    }
};

int main()
{
    cons ob1, ob2(13,67);
    return 0;
}