#include<iostream>
using namespace std;

int main()
{
    // Array to store the English words for numbers 1 to 9
    string a[10] = { " ", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;

    // Input a number from user
    cin >> n;

    // Check if the number is between 1 and 9
    if(n <= 9 && n >= 1)
    {
        // Print the corresponding English word
        cout << "" << a[n];
    }
    else
    {
        // Print "Greater than 9" if the number is outside the range 1-9
        cout << "Greater than 9";
    }
}

/* If 1 <= n <= 9, then print the lowercase English word corresponding 
to the number (e.g., one for 1, two for 2, etc.); otherwise, print Greater than 9. */
