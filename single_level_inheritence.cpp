#include<iostream>
using namespace std;

// Base class  
class base
{ 
    public:
    int n1, n2;

    // Function to get two numbers from the user
    public:
    void get()
    {
        cout << "\nEnter two numbers ";
        cin >> n1 >> n2;
    }
};

// Derived class inherits from base
class derived : public base
{
    public:
    int sum;

    // Function to calculate and display the sum of the two numbers
    public:
    void show()
    {
        sum = n1 + n2;  // Calculate the sum
        cout << "\nSum is " << sum;  // Display the sum
    }
};

int main()
{
    derived d;  // Create an object of the derived class

    d.get();  // Call the get function to input numbers
    d.show();  // Call the show function to display the sum
}
