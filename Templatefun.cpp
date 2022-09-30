#include<iostream>
using namespace std;
template<class t>
t Sum(t a,t b)
{
    return a+b;
}
int main()
{
    cout << " Int= " << Sum(10,20) << endl;
     cout << " Float= " << Sum(2.3f,4.5f) << endl;
}
