#include<iostream>
using namespace std;

// Base class stu
class stu
{
    public:
    char name1[100];
    int ID1;

    // Function to get student details from user
    public:
    void get()
    {
        cout << "\nEnter student name ";
        cin >> name1;
        cout << "\nEnter student ID ";
        cin >> ID1;
    }
};

// Base class faculty
class faculty 
{
    public:
    char name2[100];
    int ID2;

    // Function to get faculty details from user
    public:
    void get2()
    {
        cout << "\nEnter faculty's name ";
        cin >> name2;
        cout << "\nEnter faculty's ID ";
        cin >> ID2;
    }
};

// Derived class college inherits from stu and faculty
class college: public stu, public faculty
{
    public:
    char name3[100];

    // Function to get college name from user
    public:
    void get3()
    {
        cout << "\nEnter college name ";
        cin >> name3;
    }

    // Function to display student, faculty, and college details
    void show()
    {
        cout << "\nStudent name: " << name1 << "\nStudent ID: " << ID1;
        cout << "\nFaculty name: " << name2 << "\nFaculty ID: " << ID2;
        cout << "\nCollege name: " << name3;
    }
};

int main()
{
    college c;

    // Get student details from user
    c.get();

    // Get faculty details from user
    c.get2();

    // Get college name from user
    c.get3();

    // Display all details
    c.show();
}
