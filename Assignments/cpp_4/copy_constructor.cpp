#include<iostream>
using namespace std;

class con{
    private:
    int x,y;
    public:
    con(int a , int b)
    {
        x = a;
        y = b;
    }
    con(con &obj)
    {
        x = obj.x;
        y = obj.y;
    }
    /*con(const con &obj)
    we can write here const keyward to ensures the original object is not modified
    {
        x = obj.x;
        y = obj.y;
    }*/
    void display(){
        cout<<"X = "<<x<<" Y = "<<y<<endl;
    }
};
int main(){
    con obj(25,39);
    con obj1(obj);
    obj1.display();
}