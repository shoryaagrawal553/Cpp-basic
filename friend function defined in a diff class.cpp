#include<iostream>
using namespace std;

// Define a class named 'addition'
class addition
{
    public:
    // Member variables to store two integers
    int n1, n2;

    // Member function to get two integers from user input
    void get()
    {
        cout<<"enter two numbers ";
        cin>>n1>>n2; // Get two integers from user input
    }

    // Friend function declaration to show the sum of two integers
    friend void show(addition add);
};

// Define a class named 'B'
class B 
{
    public:
    // Member function to display a message
    void show2()
    {
        cout<<"Experimentttttttttt >w< ";
    }

    // Member function to show the sum of two integers from addition object
    void show(addition add)
    {
        int sum;
        sum = add.n1 + add.n2; // Calculate the sum
        cout<<"\nSum is "<<sum; // Display the sum
    }
};

/*
void show(addition add)
{
    int sum;
    sum = add.n1 + add.n2; // Calculate the sum
    cout<<"\nSum is "<<sum; // Display the sum
}
*/

int main()
{
    // Create objects of the 'addition' and 'B' classes
    addition a;
    B b;

    // Call member functions to get input, display message, and show sum
    a.get();
    b.show2();
    b.show(a);

    return 0; // Return 0 to indicate successful execution
}
