#include <iostream>
using namespace std;
class A
{
public:
    int n, i, j;
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
class B : public A
{
public:
    int n, i, j;
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
    B b;        // if class B hav not inherited class A then it will be
    b.A::get(); // A a;
    b.B::get(); // B b;
} // a.A::get();
  // b.B::get();
