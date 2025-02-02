#include<iostream>
using namespace std;

// Class A definition
class A 
{
public:
    int n1, n2;
    
    // Method to get two numbers from user
    void get()
    {
        cout << "\nEnter two numbers ";
        cin >> n1 >> n2;
    }
};

// Class B inherits from class A
class B: public A
{
public:
    int sum;
    
    // Method to calculate and display the sum of two numbers
    void Sum()
    {
        sum = n1 + n2;
        cout << "Sum is " << sum;
    }
};

// Class C inherits from class A
class C: public A
{
public:
    int sub;
    
    // Method to calculate and display the difference of two numbers
    void Sub()
    {
        sub = n1 - n2;
        cout << "\nDifference is " << sub;
    }
};

int main()
{
    B b;
    C c;
    
    // Get numbers and display sum using object of class B
    b.get();
    b.Sum();
    
    // Get numbers and display difference using object of class C
    c.get();
    c.Sub();
}
