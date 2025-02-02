#include<iostream>
using namespace std;

// Class A definition
class A{
public:
    int n, i, j;
    
    // Method to get a number from user
    void get()
    {
        cout << "Enter a number ";
        cin >> n;
    }
};

// Class B definition
class B{
public:
    int m, k, l;
    
    // Method to get a number from user
    void get()
    {
        cout << "\nEnter a number ";
        cin >> m;
    }
};

// Class C inherits from classes A and B
class C: public A, public B 
{
public:
    int i, j, k, l;
    
    // Method to display patterns based on numbers from A and B
    void show()
    {
        // Display pattern of asterisks based on number from class A
        for(i = 1; i <= n; i++)
        {
            for(j = 1; j <= i; j++)
            {
                cout << " *";
            }
            cout << "\n";
        }
        
        // Display pattern of numbers based on number from class B
        for(k = 1; k <= m; k++)
        {
            for(l = 1; l <= k; l++)
            {
                cout << " " << l;
            }
            cout << "\n";
        }
    }
};

int main()
{
    C c;
    
    // Call the get method from class A using the object of class C
    c.A::get();
    
    // Call the get method from class B using the object of class C
    c.B::get();
    
    // Call the show method to display the patterns
    c.show();
}
