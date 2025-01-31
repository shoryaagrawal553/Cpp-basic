#include<iostream>
using namespace std;
int add(int, int);
float add(float, float);
int main()
{
    int a, b, c, d, sum;
    cout<<"Enter two numbers ";
    cin>>a>>b;
    cout<<"Eneter two decimal numbers ";
    cin>>c>>d;
    cout<<"The sum is "<<add(a,b);
    sum = add(c,d);
    cout<<"\nSum of the decimal numbers is "<<sum;
}
int add(int a, int b)
{
    return(a+b);
}
float add(float c, float d)
{
    return(c+d);
}

