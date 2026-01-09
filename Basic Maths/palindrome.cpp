#include <iostream>
using namespace std;
int palindrome(int n){
    int reversed_number = 0;
    int original_number = n;
    while (n != 0) {
        int last_digit = n % 10;
        reversed_number = reversed_number * 10 + last_digit;
        n = n / 10;
    }
    if (reversed_number == original_number) {
        cout << original_number << " is a palindrome." << endl;
    } else {
        cout << original_number << " is not a palindrome." << endl;
    }   
}

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    palindrome(number);
    return 0;
}