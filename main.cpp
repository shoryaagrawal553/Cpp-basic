#include<iostream>
using namespace std;
class base
{
    public:
    int n1, n2;
    public:
    void get()
    {
        cout<<"\nEnter two number ";
        cin>>n1>>n2;
    }
};
class derived : public base
{
    public:
    int sum;
    public:
    void show()
    {
     sum=n1+n2;
     cout<<"\nSum is "<<sum;
     
    }
};
int main()
{
    derived d;
    d.get();
    d.show();
}









