#include <iostream>
using namespace std;

int main() 
{
    int a, b; 
    
    // Prompt user to enter two numbers for comparison
    cout << "Enter two numbers for the comparison ";
    cin >> a >> b;
    
    // Compare the two numbers and display the greatest one
    {
        cout << " " << a << " is the greatest number";
    }
    else
    {
        cout << " " << b << " is the greatest number";
    }
}
