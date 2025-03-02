#include<iostream>
using namespace std;

// Base class b
class b 
{ 
    public:
    int n1;
 
    // Function to get a number from user
    public:
    void get()
    {
        cout << "\nEnter a number ";
        cin >> n1;
    }
};

// Intermediate class i inherits from class b
class i : public b
{
    public:
    int n2;

    // Function to get another number from user
    public:
    void get2()
    {
        cout << "\nEnter another number ";
        cin >> n2;
    }
};

// Derived class inherits from class i
class derived : public i
{
    public:
    int sum;

    // Function to calculate and display the sum of the two numbers
    public:
    void show()
    {
        sum = n1 + n2;
        cout << "\nSum is " << sum;
    }
};

int main()
{
    derived d;

    // Get first number from user
    d.get();

    // Get second number from user
    d.get2();

    // Display the sum of the two numbers
    d.show();
}
