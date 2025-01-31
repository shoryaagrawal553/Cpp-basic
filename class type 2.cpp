#include<iostream>
using namespace std;
class student
{
  char name[100];
  int roll;
  public:
  void get();
  void show();
};
void student :: get()
{
    cout<<"Enter name ";
    cin>>name;
    cout<<" Enter roll no. ";
    cin>>roll;
}
void student :: show()
{
    cout<<"\n Name: "<<name;
    cout<<"\n Roll no.: "<<roll;
}
int main()
{
    student s;
    s.get();
    s.show();
}















