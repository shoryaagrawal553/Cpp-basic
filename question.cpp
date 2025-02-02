#include<iostream>
using namespace std;
class staff
{
    public:
    int id1;
    void get()
    {
        cout<<"\nEnter staff ID ";
        cin>>id1;
    }
};
class accountant: public staff
{
    public:
    char name[100];
    int bs, ta, da, gs;
    float pf;
    void get2()
    {
        cout<<"Enter your name (acc) ";
        cin>>name;
        cout<<"Enter your basic salary ";
        cin>>bs;
        ta=7*bs/100;
        da=2*bs/100;
        pf=12.5*bs/100;
        gs=bs+ta+da;
        cout<<"Your gross salary is "<<gs;
        cout<<"\nYour net salary is "<<gs-pf;
    }
};
class faculty: public staff
{
    public:
    char name2[100];
    void get3()
    {
        cout<<"\n\nEnter your name (faculty) ";
        cin>>name2;
    }
};
class permanent: public faculty
{
    public:
   // char name[100];
    int bs, ta, da, gs;
    float pf;
    void get4()
    {
        cout<<"permanent";
        cout<<"\nEnter your basic salary ";
        cin>>bs;
        ta=7*bs/100;
        da=2*bs/100;
        pf=12.5*bs/100;
        gs=bs+ta+da;
        cout<<"\nYour gross salary is "<<gs;
        cout<<"\nYour net salary is "<<gs-pf;
        
    }
};
class visitng: public faculty
{
    public:
    int n;
    void get5()
    {
        cout<<"\nEnter the number of days you were present ";
        cin>>n;
        cout<<"\nYour salary is "<<n*500;
    }
};
class labour: public staff
{
    public:
    char namel[100];
    int sal4, x;
    void get6()
    {
        cout<<"\nEnter your name ";
        cin>>namel;
        cout<<"\nEnter the numbr of days you were present at work ";
        cin>>x;
        cout<<"\nYour salary is "<<x*300;
    }
};
int main()
{
    accountant a;
    permanent p;
    visitng v;
    labour l;
    a.get();
    a.get2();
    p.get3();
    p.get4();
    v.get3();
    v.get5();
    l.get();
    l.get6();
    return 0;
}













