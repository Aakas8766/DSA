#include <iostream>
#include <cmath>
using namespace std;

int count(int n){ // Iterative method
    int digit_count = 0;
    if (n == 0) {
        return 1; // Special case for 0
    }
    if (n < 0) {
        n = -n; // Make n positive if it's negative
    }
    while (n > 0) {
        n = n / 10;
        digit_count++;
    }
    return digit_count;
}

int counts(int n){ // Logarithmic method
    if (n == 0) {
        return 1; // Special case for 0
    }
    if (n < 0) {
        n = -n; // Make n positive if it's negative
    }
    return (int) (log10(n)) + 1;
}

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    int digit = count(number);
    cout << "Number of digits in " << number << " is: " << digit << endl;

    int digits = counts(number);
    cout << "Number of digits in " << number << " is: " << digits << endl;


    return 0;
}