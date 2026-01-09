#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    vector<int> divisors;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Divisors of " << n << " are: ";
  
     for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) {
                divisors.push_back(n / i);
            }
        }
    }
    sort (divisors.begin(), divisors.end());
    for (int div : divisors) {
        cout << div << " ";
    }
    return 0;
}