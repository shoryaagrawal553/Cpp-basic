#include<iostream>
using namespace std;
class b 
{
public:
int n1;
public:
void get()
{
    cout<<"\nEnter a number ";
    cin>>n1;
}
};
class i : public b
{
    public:
    int n2;
    public:
    void get2()
    {
       cout<<"\nEnter another number ";
       cin>>n2;
    }
};
class derived : public i
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
    d.get2();
    d.show();
}













