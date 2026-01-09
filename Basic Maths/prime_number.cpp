#include <iostream>
using namespace std;
bool isPrime(int n) {
    if (n <= 1) {
        return false; // Numbers less than or equal to 1 are not prime
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false; // Found a divisor, not prime
        }
    }
    return true; // No divisors found, it's prime
}
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPrime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }

    return 0;
}