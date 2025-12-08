#include <iostream> 
using namespace std;     
     
// Function declaration for adding two integers
int add(int, int);
  
// Function declaration for adding two floats
float add(float, float);

int main()
{
    int a, b, c, d, sum;
    
    // Prompt user to enter two integers
    cout<<"Enter two numbers ";
    cin>>a>>b;

    // Prompt user to enter two decimal numbers
    cout<<"Enter two decimal numbers ";
    cin>>c>>d;

    // Call add function for integers and display the result
    cout<<"The sum is "<<add(a,b);

    // Call add function for floats and display the result
    sum = add(c,d);
    cout<<"\nSum of the decimal numbers is "<<sum;
}

// Function definition for adding two integers
int add(int a, int b)
{
    return(a+b);
}

// Function definition for adding two floats
float add(float c, float d)
{
    return(c+d);
}
