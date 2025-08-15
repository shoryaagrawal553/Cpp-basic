#include <iostream> 
using namespace std;
  
// Define a class named 'student'   
class student 
{
    // Private member variables to store student information
    char name[100];
    int roll; 
  
    public:
    // Member function declarations
    void get();  
    void show();
};

// Member function definition to get student details from user input
void student :: get()    // function defination outside the class 
{
    cout<<"Enter name ";
    cin>>name; // Get the student's name
    cout<<" Enter roll no. ";
    cin>>roll; // Get the student's roll number
}

// Member function definition to display student details
void student :: show()
{
    cout<<"\n Name: "<<name; // Display the student's name 
    cout<<"\n Roll no.: "<<roll; // Display the student's roll number
}

int main()
{
    // Create an object of the 'student' class
    student s;

    // Call member functions to get and display student details
    s.get();
    s.show();

    return 0; // Return 0 to indicate successful execution
}
