//program on friend class and friend function
#include<iostream>
using namespace std;
class A
{
    private:
        int a1;
    public:
        A(){a1 = 0;}
        friend class B;//Friend class
};
class B
{
    private:
        int b;
    public:
        void showA(A &x)
        {
            std::cout<<"A::a="<<x.a1;
        }
};
int main()
{
    A a;
    B b;
    b.showA(a);
    return 0;
}
