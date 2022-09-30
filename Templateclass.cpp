#include <iostream>
using namespace std;
template<class t1,class t2>
class A
{
    t1 a; t2 b;
public:
    A(t1 x,t2 y)
    {
        a=x;
        b=y;
    }
    void fun()
    {
        cout<<"A+B= "<<a+b<<endl;
    }
};
int main()
{
    A<int,float> a(10,23.4f);
    a.fun();
}
