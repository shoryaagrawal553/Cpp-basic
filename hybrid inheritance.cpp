#include<iostream>
using namespace std;
class A 
{
    public:
    int n1, n2;
    void get()
    {
        cout<<"Enter two numbers ";
        cin>>n1>>n2;
    }
};
class B: virtual public A
{
    public:
    int sum;
    void add()
    {
        sum=n1+n2;
    }
};
class C: virtual public A
{
  public:
  int diff;
  void sub()
  {
      diff=n1-n2;
  }
};
class D: public B, public C
{
  public:
  void show()
  {
      cout<<"Sum is "<<sum;
      cout<<"\nDifference is "<<diff;
  }
};
int main()
{
    D d;
    d.get();
    d.add();
    d.sub();
    d.show();
}











