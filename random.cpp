#include<iostream>
using namespace std;
class employee
{
    public:
    int id;
    char name[100];
    employee ()
    {
        cout<<"\nEnter your name and Id ";
        cin>>name>>id;
    }
};
class manager: private employee
{
    public:
    int mob;
    manager()
    {
      //  employee();
        cout<<"\nEnter our mobile number ";
        cin>>mob;
        cout<<"\nName: "<<name<<"\nId: "<<id;
        cout<<"\nMobile no.: "<<mob;
    }
};
class accountant: public employee
{
    public:
    int sal;
    accountant()
    {
     cout<<"\nEnter your salary ";
     cin>>sal;
     cout<<"\nName: "<<name<<"\nId: "<<id;
     cout<<"\nSalary: "<<sal;
    }
};
int main()
{
    manager m;
    accountant a;
}

















