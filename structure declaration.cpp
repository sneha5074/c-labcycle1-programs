//program to declare struct.Initialize and display contents of member variables.
#include<iostream>
using namespace std;
struct student
{
char name[20];
int rollno;
int gpa;
};
int main()
{
student s;
cout<<"student name"<<endl;
cin>>s.name;
cout<<"enter rollno"<<endl;
cin>>s.rollno;
cout<<"enter gpa"<<endl;
cin>>s.gpa;
}