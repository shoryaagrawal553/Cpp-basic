#include<iostream>  
using namespace std; 
  
// Define a class named 'addition'  
class Addition
{
    private:
    // Member variables to store two integers 
    int n1, n2;

    public: 
    // Member function to get two integers from user input
    void get()
    {
        cout<<"enter two numbers ";
        cin>>n1>>n2; // Get two integers from user input
    }

    // Friend function declaration to show the sum of two integers
    friend void show(Addition add);
};


class B   // hence this class is of no use here
{
    public:
    // Member function to display a message
    void show()
    {
        cout<<"Experimentttttttttt >w< ";
    }

    // Member function to show the sum of two integers from addition object
    // friend void show(Addition add)  // this part causes error because friend function can not be 
                                      //called by object of another class
    // {
    //     int sum;
    //     sum = add.n1 + add.n2; // Calculate the sum
    //     cout<<"\nSum is "<<sum; // Display the sum
    // }
};

// Friend function definition to show the sum of two integers
void show(Addition add)
{
    int sum;
    sum = add.n1 + add.n2; // Calculate the sum
    cout<<"\nSum is "<<sum; // Display the sum
}

 
int main()
{
    // Create objects of the 'addition' and 'B' classes
    Addition a;
   // B b;

    // Call member functions to get input, display message, and show sum
    a.get();
   // b.show();
    //b.show(a);  // this part causes error because friend function can not be 
                  //called by object of another class
    show(a);

    return 0; // Return 0 to indicate successful execution
}
