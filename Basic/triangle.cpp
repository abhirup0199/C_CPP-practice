#include<iostream>
using namespace std;
class triangle{
    private:
    int side1, side2, side3;
    public:
    void set()
    {
        cout<<"Enter the value of Side1 , Side2 & Side3 : ";
        cin>>side1>>side2>>side3;
    }
    void display()
    {
        if(side1 < side2+side3 && side2 < side1+side3 && side3 < side2+side1)
        {
            if(side1 == side2 == side3)
            cout<<"Equilateral Triangle";
            else if(side1 == side2 || side1 == side3 || side2 == side3)
            cout<<"Isosceles Triangle";
            else
            cout<<"Scalene Triangle";
        }
        else
        cout<<"Triangle not possible";
    }
};

int main()
{
    triangle x;
    x.set();
    x.display();
}