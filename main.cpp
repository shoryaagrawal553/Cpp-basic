#include <iostream>
using namespace std;

int main() {
    int a, b, i;
    string n[10]={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cin>>a;
    cin>>b;
    if(a<=9)
    {
        for(i=a; i<=b; i++)
        cout<<""<<n[i]<<"\n";
    }
    else {
    for(i=a; i<=b; i++)
    {
        if(i%2==0)
        {
            cout<<"even";
        }
        else {
        cout<<"odd";
        }
    }
    }
    return 0;
}
