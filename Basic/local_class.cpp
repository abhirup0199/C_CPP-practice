#include<iostream>
using namespace std;

int main(){
    class adding{
        private:
        int a;
        public:
        void add(int b , int c)
        {
            a = b + c;
        }
        void display(){
            cout<<a<<endl;
        }
    };
    adding obj;
    obj.add(5,9);
    obj.display();
}