#include<iostream>
using namespace std;

// Define a class named 'student'
class student
{
    public:
    // Member variables to store student information
    char name[100];
    int roll;
    float per;

    public:
    // Member function to get student details from user input
    void get()
    {
        cout<<"\n Enter name ";
        cin>>name; // Get the student's name
        cout<<"\n Enter roll number ";
        cin>>roll; // Get the student's roll number
        cout<<"\n Enter percentage ";
        cin>>per; // Get the student's percentage
    }

    // Member function to display student details
    void show()
    {
        cout<<"\n Name: "<<name; // Display the student's name
        cout<<"\n Rooll no.: "<<roll; // Display the student's roll number
        cout<<"\n Percentage: "<<per<<"%"; // Display the student's percentage
    }
};

int main()
{
    // Create an object of the 'student' class
    student stu;

    // Call member functions to get and display student details
    stu.get();
    stu.show();

    return 0; // Return 0 to indicate successful execution
}
