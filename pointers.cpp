//write a c++ program to declare a class. Declare pointer to class. Initialize and display the contents of the class member.
#include<iostream>
using namespace std;
class pointers
{
	public:
		int a;
	        float b;
		char c;
};
int main()
{
	pointers obj;
	pointers *ptr;
	ptr=&obj;
	ptr->a=10;
	ptr->b=20;
	ptr->c='a';
	cout<<"a is "<<ptr->a<<endl;
	cout<<"b is "<<ptr->b<<endl;
	cout<<"c is "<<ptr->c<<endl;
}
