#include<iostream>
using namespace std;

// Base class A
class A
{
    public:
    int n1, n2;

    // Function to get two numbers from user
    void get()
    {
        cout << "\nEnter two numbers ";
        cin >> n1 >> n2;
    }
};

// Derived class B inherits from class A privately
class B: private A
{
    public:
    int sum;

    // Function to get numbers, calculate sum and display it
    void show()
    {
        get();  // Calling base class function to get numbers
        sum = n1 + n2;  // Calculating sum of the numbers
        cout << "Sum is " << sum;  // Displaying the sum
    }
};

int main()
{
    B b;
    b.show();  // Displaying the sum
}
