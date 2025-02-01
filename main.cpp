#include<iostream>
using namespace std;
class A
{
    public:
    int n1, n2;
   // private:
    void get()
    {
        cout<<"\nEnter two numbers ";
        cin>>n1>>n2;
    }
};
    class B: private A
    {
        public:
        int sum;
        void show()
        {
            get();
            sum=n1+n2;
            cout<<"Sum is "<<sum;
        }
    };
    int main()
    {
        B b;
        b.show();
    }