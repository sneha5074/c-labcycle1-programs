///program using catch all exceptions
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter values of a and b \n";
    cin>>a;
    cin>>b;
    try
    {
        if(b == 0)
        {
            cout<<"b cannot be zero \n";
            throw(b);
        }
        else if(b<0)
        {
            cout<<" b cannot be less than zero \n";
            throw(b);
        }
        else
        {
            cout<<"result of (a/b) is : \n"<<a/b;
        }
    }
        catch(...)
        {
            cout<<"exception is caught \n";
        }
        return 0;
}
