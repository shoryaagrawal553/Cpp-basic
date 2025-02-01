#include<iostream>
using namespace std;
class A{
  public:
  int n, i, j;
  void get()
  {
      cout<<"Enter a number ";
      cin>>n;
  }
};
class B{
    public:
    int m, k, l;
    void get()
    {
        cout<<"\nEnter a number ";
        cin>>m;
    }
};
class C: public A, public B 
{
    public:
    int i, j, k, l;
    void show()
    {
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=i; j++)
            {
                cout<<" *";
            }
            cout<<"\n";
        }
        for(k=1; k<=m; k++)
        {
            for(l=1; l<=k; l++)
            {
                cout<<" "<<l;
            }
            cout<<"\n";
        }
    }
};
int main()
{
    C c;
    c.A::get();
    c.B::get();
    c.show();
}























