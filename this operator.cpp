//program using this pointer.
#include<iostream>
using namespace std;
class Demo
{
private:
int num;
char ch;
public:
void setmyvalues(int num,char ch)
{
this->num=num;
this->ch=ch;
}
void displaymyvalues()
{
cout<<num<<endl;
cout<<ch;
}
};
int main ()
{
Demo obj;
obj.setmyvalues(123,'A');
obj.displaymyvalues();
return 0;
}