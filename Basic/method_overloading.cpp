#include<iostream>
using namespace std;
class cons{
    public:

    int add(int a, int b)
    {
        return a+b;
    }
    float add(float a, float b)
    {
        return a+b;
    }
    int add(int a, int b, int c)
    {
        return a+b+c;
    }
};

int main()
{
    cons ob;
    cout<<ob.add(2,5)<<endl;
    cout<<ob.add(2.6f,5.9f)<<endl;
    cout<<ob.add(2,5,89)<<endl;
    return 0;
}
