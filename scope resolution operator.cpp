//program to use scope resolution operator.Display the various values of the same variables declared at different scope levels
#include<iostream>
using namespace std;
int i=5; //i at global scope//
int main()
{
int i=10; //i at local scope//
cout<<"value of i at local scope ="<<i<<endl;
cout<<"value of i at global scope ="<<::i<<endl;
}