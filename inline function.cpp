#include<iostream>
using namespace std;
inline int add(int a, int b)    //program will work even without inline
{
    return (a+b);
}
int main()
{
    int a, b;
    cout<<"Enter two numbers ";
    cin>>a>>b;
    cout<<"Sum of the numbers is "<<add(a, b);
}
