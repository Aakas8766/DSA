#include <iostream>
using namespace std;
int reverse(int n){
    int reversed_number = 0;
    while (n != 0) {
        int last_digit = n % 10;
        reversed_number = reversed_number * 10 + last_digit;
        n = n / 10;
    }
    return reversed_number;
}

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    int reversed = reverse(number);
    cout << "Reversed number: " << reversed << endl;

    return 0;
}