//parameterised constructors
#include <iostream>
using namespace std;
class parameterised_constructors
{
    public:
    int x;
    int y;
    parameterised_constructors(int a,int b)
    {
        cout<<"welcome to parameterized constructors"<<endl;
        x=a;
        y=b;
        cout<<x<<","<<y<<endl;
    }
};
int main()
{
    parameterised_constructors p1(48,56);
    cout <<"explicit calling"<<endl;
    parameterised_constructors p2=parameterised_constructors(48,56); 
    return 0;
}