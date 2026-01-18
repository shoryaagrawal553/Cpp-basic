#include<iostream>
using namespace std;

// Base class staff
class staff
{
    public:
    int id1;

    // Function to get staff ID from user
    void get()
    {
        cout << "\nEnter staff ID ";
        cin >> id1;
    } 
};

// Derived class accountant inherits from staff
class accountant: public staff 
{
    public:
    char name[100];
    int bs, ta, da, gs;
    float pf;

    // Function to get accountant details and calculate their salary
    void get2()
    {
        cout << "Enter your name (acc) ";
        cin >> name;
        cout << "Enter your basic salary ";
        cin >> bs;
        ta = 7 * bs / 100;
        da = 2 * bs / 100;
        pf = 12.5 * bs / 100;
        gs = bs + ta + da;
        cout << "Your gross salary is " << gs;
        cout << "\nYour net salary is " << gs - pf;
    }
};

// Derived class faculty inherits from staff
class faculty: public staff
{
    public:
    char name2[100];

    // Function to get faculty name
    void get3()
    {
        cout << "\n\nEnter your name (faculty) ";
        cin >> name2;
    }
};

// Derived class permanent inherits from faculty
class permanent: public faculty
{
    public:
    int bs, ta, da, gs;
    float pf;

    // Function to get permanent faculty details and calculate their salary
    void get4()
    {
        cout << "permanent";
        cout << "\nEnter your basic salary ";
        cin >> bs;
        ta = 7 * bs / 100;
        da = 2 * bs / 100;
        pf = 12.5 * bs / 100;
        gs = bs + ta + da;
        cout << "\nYour gross salary is " << gs;
        cout << "\nYour net salary is " << gs - pf;
    }
};

// Derived class visitng inherits from faculty
class visitng: public faculty
{
    public:
    int n;

    // Function to get visiting faculty details and calculate their salary
    void get5()
    {
        cout << "\nEnter the number of days you were present ";
        cin >> n;
        cout << "\nYour salary is " << n * 500;
    }
};

// Derived class labour inherits from staff
class labour: public staff
{
    public:
    char namel[100];
    int sal4, x;

    // Function to get labour details and calculate their salary
    void get6()
    {
        cout << "\nEnter your name ";
        cin >> namel;
        cout << "\nEnter the number of days you were present at work ";
        cin >> x;
        cout << "\nYour salary is " << x * 300;
    }
};

int main()
{
    accountant a;
    permanent p;
    visitng v;
    labour l;

    // Get and display accountant details
    a.get();
    a.get2();

    // Get and display permanent faculty details
    p.get3();
    p.get4();

    // Get and display visiting faculty details
    v.get3();
    v.get5();

    // Get and display labour details
    l.get();
    l.get6();

    return 0;
}
