#include<iostream>
#include<math.h>
#define pi 3.14;
using namespace std;
class circle{
    private:
    float a;
    float c;
    float redius;
    public:
    float area ()
    {
        a = pow(redius,2) * pi;
        return a;
    }
    float circumference ()
    {
        c = redius * 2 * pi;
        return c;
    }
    void data ()
    {
        cout<<"\nEnter the value of Radius : ";
        cin>>redius;
    }
    void display()
    {
        cout<<"\nArea : "<<area();
        cout<<"\nCircumference : "<<circumference();
    }
};

int main()
{
    circle x;
    x.data();
    x.display();
}