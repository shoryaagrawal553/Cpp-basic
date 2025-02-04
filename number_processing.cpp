#include <iostream>
using namespace std;

int main() {
    int a, b, i;
    // Array of strings to represent numbers from 0 to 9
    string n[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    cout << "Enter \n";
    cin >> a;  // Input first number
    cin >> b;  // Input second number

    // Check if both numbers are between 0 and 9
    if (a <= 9 && a >= 0 && b <= 9 && b >= 0) {
        for (i = a; i <= b; i++)
            cout << n[i] << "\n";  // Output corresponding string representation of the number
    } 
    else { 
        // If any number is outside the range 0-9
        for (i = a; i <= b; i++) {
            if (i % 2 == 0) {
                cout << i << " even \n";  // Output if the number is even
            } else {
                cout << i << " odd \n";  // Output if the number is odd
            }
        }
    }
    return 0;
}
