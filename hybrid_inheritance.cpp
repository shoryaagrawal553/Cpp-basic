#include <iostream>
using namespace std;

// Base class A
class A 
{
    public:
    int n1, n2;

    // Function to get two numbers from user
    void get()
    {
        cout<<"Enter two numbers ";
        cin>>n1>>n2;
    }
};

// Derived class B inherits from A virtually
class B: virtual public A
{
    public:
    int sum;

    // Function to add the two numbers
    void add()
    {
        sum = n1 + n2;
    }
};

// Derived class C inherits from A virtually
class C: virtual public A
{
    public:
    int diff;

    // Function to find the difference of the two numbers
    void sub()
    {
        diff = n1 - n2;
    }
};

// Derived class D inherits from B and C
class D: public B, public C
{
    public:

    // Function to display the sum and difference
    void show()
    {
        cout << "Sum is " << sum;
        cout << "\nDifference is " << diff;
    }
};

int main()
{
    D d;

    // Get numbers from user
    d.get();

    // Calculate sum
    d.add();

    // Calculate difference
    d.sub();

    // Display results
    d.show();
}
