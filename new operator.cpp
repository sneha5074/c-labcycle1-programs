//program to allocate memory using new operator
#include<iostream>
using namespace std;
class test
{
int a,b;
public:
test()
{
cout<<"constructor"<<endl;
a=5,b=10;
}
void show()
{
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;
}
};
int main()
{
test * ptr;
ptr=new test;
ptr->show();
delete ptr;
return 0;
}