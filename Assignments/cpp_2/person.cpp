#include<iostream>
using namespace std;
class person {
    private:
    string name;
    int age;
    string country;
    public:
    void set()
    {
        cout<<"\nName : ";
        cin>>name;
        cout<<"\nAge : ";
        cin>>age;
        cout<<"\nCountry : ";
        cin>>country;
    }
    void get()
    {
        cout<<"\nName : "<<name;
        cout<<"\nAge : "<<age;
        cout<<"\nCountry : "<<country;
    }
};

int main(){
    person x;
    x.set();
    x.get();
}