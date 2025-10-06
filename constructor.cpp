#include <iostream> 
using namespace std;
      
// Define a class named 'addition'  
class addition
{
    public:
    // Member variables to store two integers
    int n1, n2;
    
    // Constructor to initialize member variables and calculate the sum
    addition ()
    {
        cin >> n1 >> n2; // Get two integers from user input
        cout << "Sum is " << n1 + n2; // Display the sum of the two integers
    }
};

int main()
{
    // Create an object of the 'addition' class
    addition A; // The constructor is called automatically here

    return 0; // Return 0 to indicate successful execution
}
