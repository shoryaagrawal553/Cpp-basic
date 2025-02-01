#include<iostream>
using namespace std;
class stu
{
    public:
    char name1[100];
    int ID1;
    public:
    void get()
    {
        cout<<"\nEnter student name ";
        cin>>name1;
        cout<<"\nEnter student ID ";
        cin>>ID1;
    }
};
class faculty 
{
    public:
    char name2[100];
    int ID2;
    public:
    void get2()
    {
        cout<<"\nEnter faculty's name ";
        cin>>name2;
        cout<<"\nEnter faculty's ID ";
        cin>>ID2;
    }
};
class college: public stu, public faculty
{
    public:
    char name3[100];
    public:
    void get3()
    {
        cout<<"\nEnter college name ";
        cin>>name3;
    }
    void show()
    {
    cout<<"\nStudent name: "<<name1<<"\nStudent ID: "<<ID1;
    cout<<"\nFaculty name: "<<name2<<"\nFaculty ID: "<<ID2;
    cout<<"\nCollege name: "<<name3;
    }
};
int main()
{
    college c;
    c.get();
    c.get2();
    c.get3();
    c.show();
}











