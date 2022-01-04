//default constructor and destructor
#include<iostream>
using namespace std;
class demo_destructor
{
    public:
    demo_destructor()
    {
        cout<<"constructor is called "<<endl;
    }
    ~demo_destructor()
    {
        cout<<"destructor is called"<<endl;
    }
    void print()
    {
        cout<<"hello"<<endl;
    }
};
int main()
{
    demo_destructor d;
    d.print();
    return 0;
}