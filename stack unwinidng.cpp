//stack unwinding
#include<iostream>
using namespace std;
void f1()
throw (int)
{
    cout<<"\n f1()start";
    throw 100;
    cout<<"\n f1() end";
}
void f2()
throw (int)
{
    cout<<"\n f2()start";
    f1();
    cout<<"\n f2() end";
}
void f3()
{
    cout<<"\n f3()start";
    try
    {
        f2();
    }
catch(int i)
{
    cout<<"\n caught exception:"<<i;
}
cout<<"\n f3() end";
}
int main()
{
    f3();
    return 0;
}

