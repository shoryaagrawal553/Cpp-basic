#include <iostream>
using namespace std;

// Class A definition
class A
{
public:
    int n, i, j;
    
    // Method to get a number from user and print a pattern of asterisks
    void get()
    {
        cout << "Enter a number ";
        cin >> n;
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= i; j++)
            {
                cout << " *";
            }
            cout << "\n";
        }
    }
};

// Class B inherits from class A
class B : public A
{
public:
    int n, i, j;
    
    // Method to get a number from user and print a pattern of numbers
    void get()
    {
        cout << "\nEnter a number ";
        cin >> n;
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= i; j++)
            {
                cout << " " << j;
            }
            cout << "\n";
        }
    }
};

int main()
{
    B b;
    
    // Call the get method from class A using the object of class B
    b.A::get();
    
    // Call the get method from class B using the object of class B
    b.B::get();
    
    // Uncomment and use the following if class B had not inherited from class A
    // A a;
    // B b;
    // a.A::get();
    // b.B::get();
}
