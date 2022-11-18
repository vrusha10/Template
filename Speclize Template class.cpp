#include <iostream> 
using namespace std; 
//template<class T1,class T2>                                    using multiple parameter
template<class T>
class  Test 
{
    public:
    Test()
    {
        cout<<"General Template"<<endl;
    }
};
template<>
//class Test<int,char>                                           using multiple parameter
class Test<int>
{
    public:
    Test()
    {
        // cout<<"Specizle Template int and char"<<endl;          using multiple parameter
        cout<<"Specizle Template int "<<endl;
    }
};

int main()
{
    //Test<int,char>a;                                           using multiple parameter
    Test<int>a;
    Test<char>b;
    Test<float>c;
}
