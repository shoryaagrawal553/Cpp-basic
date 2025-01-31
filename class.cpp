#include<iostream>
using namespace std;
class student
{
    public:
    char name[100];
    int roll;
    float per;
    public:
    void get()
    {
        cout<<"\n Enter name ";
        cin>>name;
        cout<<"\n Enter roll number ";
        cin>>roll;
        cout<<"\n Enter percentage ";
        cin>>per;
    }
    void show()
    {
        cout<<"\n Name: "<<name;
        cout<<"\n Rooll no.: "<<roll;
        cout<<"\n Percentage: "<<per<<"%";
    }
};
int main()
{
    student stu;
    stu.get();
    stu.show();
}














