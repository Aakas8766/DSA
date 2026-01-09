#include<iostream>
using namespace std;
int isArmstrong(int n){
    int original_number = n;
    int sum = 0;

    // Calculate the sum of the cubes of each digit
    while (n > 0) {
        int last_digit = n % 10;
        sum = sum + (last_digit * last_digit * last_digit);
        n =  n / 10;
    }

    // Check if the sum is equal to the original number
    if (sum == original_number) {
        cout << original_number << " is an Armstrong number." << endl;
    } else {
        cout << original_number << " is not an Armstrong number." << endl;
    }
}

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    isArmstrong(number);
    return 0;
}