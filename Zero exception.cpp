//program on divide by zero exception using try,catch,throw blocks
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter values of a and b \n";
    cin>>a;
    cin>>b;
    int x;
    x=a-b;
    try
    {
        if(x!=0)
        {
            cout<<"result of (a/x) is : \n"<<a/x;
        }
        else
        {
            throw(x);
        }
    }
    catch(int x)
    {
        cout<<"exception caught . \n x = "<<x;
    }
    return 0;
}

