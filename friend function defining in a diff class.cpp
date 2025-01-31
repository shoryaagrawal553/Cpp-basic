#include<iostream>
using namespace std;
class addition
{
    public:
    int n1, n2;
    void get()
    {
    cout<<"enter two numbers ";
    cin>>n1>>n2;
    }
    friend void show(addition add);
};
class B 
{
    public:
    void show2()
    {
        cout<<"Experimentttttttttt >w< ";
    }
    void show(addition add)
    {
        int sum;
        sum= add.n1 + add.n2;
        cout<<"\nSum is "<<sum;
    }
};
/*void show(addition add)
{
    int sum;
    sum=add.n1 + add.n2;
    cout<<"\nSum is "<<sum;
}*/
int main()
{
    addition a;
    B b;
    a.get();
    b.show2();
    b.show(a);
}