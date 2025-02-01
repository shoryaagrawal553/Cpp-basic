#include<iostream>
using namespace std;
class demo
{
    public:
    int sum, n1, n2;
    demo(int a, int b)
    {
        n1=a;
        n2=b;
    }
    demo()
    {
        cout<<"Enter two numbers";
        cin>>n1>>n2;
        sum=n1+n2;
    }
    demo(demo& s)
{
    n1=s.n1;
    n2=s.n2;
   // cout<<"\nhiiiiiiiii";
}
void show()
{
    cout<<"\nSum is "<<sum;
}
};
int main()
{
    demo d;
    d.show();
    demo y(d);
    d.show();
}




















