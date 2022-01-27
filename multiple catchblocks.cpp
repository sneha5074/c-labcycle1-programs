//program on divide by zero using multiple catch blocks
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"enter the values of x and y : \n";
    cin>>x;
    cin>>y;
    try
    {
        if(y == 0)
        {
            throw(y);
        }
        else if(y<0)
        {
            cout<<"y cannot be less than zero \n";
        }
        else
        {
            cout<<"result of (x/y) is : \n"<<(x/y);
        }
    }
    catch(int y)
    {
        cout<<"y cannot be zero \n";
        cout<<"exception is caught \n"<<endl;
    }
    return 0;
}
