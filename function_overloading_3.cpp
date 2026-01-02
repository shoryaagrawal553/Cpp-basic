#include <iostream> 
using namespace std; 

// Class demo definition  
class demo
{ 
public:
    int sum, n1, n2;
    
    // Parameterized constructor to initialize n1 and n2 with given values
    demo(int a, int b)
    {
        n1 = a;
        n2 = b;
    }
    
    // Default constructor to read two numbers from user and calculate their sum
    demo()
    {
        cout << "Enter two numbers";
        cin >> n1 >> n2;
        sum = n1 + n2;
    }
    
    // Copy constructor to initialize n1 and n2 with values from another demo object
    demo(demo& s)
    {
        n1 = s.n1;
        n2 = s.n2;
    }
    
    // Method to display the sum
    void show()
    {
        cout << "\nSum is " << sum;
    }
};

int main()
{
    // Create an object of demo using default constructor
    demo d;
    d.show();
    
    // Create another object of demo using copy constructor
    demo y(d);
    d.show();
}
