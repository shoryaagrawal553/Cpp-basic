#include<iostream>  
using namespace std; 
       
// Base class employee     
class employee 
{  
    public:
    int id;
    char name[100]; 

    // Constructor to get employee's name and ID from user
    employee ()
    {
        cout << "\nEnter your name and Id "; 
        cin >> name >> id;
    }
};

// Derived class manager inherits from employee privately
class manager: private employee
{
    public:
    int mob;

    // Constructor to get manager's mobile number and display details
    manager()
    {
        // employee(); // This line is commented out as the base class constructor is called automatically
        cout << "\nEnter your mobile number ";
        cin >> mob;
        cout << "\nName: " << name << "\nId: " << id;
        cout << "\nMobile no.: " << mob;
    }
};

// Derived class accountant inherits from employee publicly
class accountant: public employee
{
    public:
    int sal;

    // Constructor to get accountant's salary and display details
    accountant()
    {
        cout << "\nEnter your salary ";
        cin >> sal;
        cout << "\nName: " << name << "\nId: " << id;
        cout << "\nSalary: " << sal;
    }
};

int main()
{
    manager m;  // Create manager object
    accountant a;  // Create accountant object
}
