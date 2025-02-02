#include<iostream>
using namespace std;
int main()
{
    string a[10] = { " ", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cin>>n;
    if(n<=9 && n>=1)
    {
        cout<<""<<a[n];
    }
    else
    {
        cout<<"Greater than 9";
    }
}
/* If 1<= n<= 9 , then print the lowercase English word corresponding 
to the number (e.g., one for 1, two for 2, etc.); otherwise, print Greater than 9.*/