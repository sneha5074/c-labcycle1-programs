//given that an employee class contains following members: data members: employee number,employee name,Basic DA,IT,Net salary and print data  members.
#include<iostream>
using namespace std;
class employee
{
	public:
	int emp_no;
	string name;
	float emp_basic;
	float DA;
	float IT; 
	float net_salary;

};
int main()
{
	employee e;
	cout<<"enter employee number"<<endl;
	cin>>e.emp_no;
	cout<<endl;
	cout<<"enter employee name"<<endl;
	cin>>e.name;
	cout<<endl;
	cout<<"enter employee basic salary"<<endl;
	cin>>e.emp_basic;
	cout<<endl;
	e.DA=0.52*e.emp_basic;
	e.IT=0.3*e.emp_basic;
	e.net_salary=e.emp_basic+e.DA+e.IT;
	cout<<"details of       "<<e.name<<endl;
	cout<<endl;
	cout<<"employee number  "<<e.emp_no<<endl;
	cout<<"basic salary     "<<e.emp_basic<<endl;
	cout<<"employee DA      "<<e.DA<<endl;
	cout<<"Income Tax       "<<e.IT<<endl;
	cout<<"Net salary       "<<e.net_salary<<endl;
}
