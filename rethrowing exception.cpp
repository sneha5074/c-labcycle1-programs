//program on rethrowing exception
#include<iostream>
using namespace std;
void divide(int x, int y)
{
    cout<<"inside function \n";
    try
    {
        if(y == 0)
        {
        throw(y);
        }
        else
        {
            cout<<"result of (x/y) is : "<<x/y;
        }
    }
    catch(int)
    {
        cout<<" y is inside the function \n";
        throw;                                 
    }
}
int main()
{
    cout<<"inside main function \n ";
    try
    {
        divide(10,5);
    }
    catch(int)
    {
        cout<<"y is caught inside the main function \n";
    }
    return 0;
}
