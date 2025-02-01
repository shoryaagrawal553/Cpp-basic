#include<iostream>
using namespace std;
class A 
{
    public:
    int n1, n2;
    void get()
    {
        cout<<"\nEnter two numbers ";
        cin>>n1>>n2;
    }
};
class B: public A
{
    public:
    int sum;
    void Sum()
    {
        sum=n1+n2;
        cout<<"Sum is "<<sum;
    }
};
class C: public A
{
    public:
    int sub;
    void Sub()
    {
        sub=n1-n2;
        cout<<"\nDifference is "<<sub;
    }
};
int main()
{
   B b;
   C c;
   b.get();
   b.Sum();
   c.get();
   c.Sub();
}













