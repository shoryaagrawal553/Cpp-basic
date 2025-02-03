#include <iostream>
using namespace std;

int main() {
    int a, b, i;
    string n[10]={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cout<<"enter \n";
    cin>>a;
    cin>>b;
    if(a<=9 && a>=0 && b<=9 && b>=0)
    {
        for(i=a; i<=b; i++)
        cout<<""<<n[i]<<"\n";
    }
    else {
    for(i=a; i<=b; i++)
    {
        if(i%2==0)
        {
            cout<<i<<" even \n";
        }
        else {
        cout<<i<<" odd \n";
        }
    }
    }
    return 0;
}
