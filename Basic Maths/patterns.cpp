#include <iostream>
#include <cstdlib>
using namespace std;
void pattern1(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern2(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern3(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << j;
        }
        cout << endl;
    }
}
void pattern4(int n){
     for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << i;
        }
        cout << endl;
    }
}
void pattern5(int n){
     for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout <<"*";
        }
        cout << endl;
    }
}
void pattern6(int n){
     for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout << j;
        }
        cout << endl;
    }
}
void pattern7(int n){
     for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout <<" ";
        }
        for(int j=1; j<=2*i-1; j++){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern8(int n){
     for(int i=n; i>=1; i--){
        for(int j=1; j<=n-i; j++){
            cout <<" ";
        }
        for(int j=1; j<=2*i-1; j++){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern9(int n){
     for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout <<" ";
        }
        for(int j=1; j<=2*i-1; j++){
            cout << "*";
        }
        cout << endl;
    }

     for(int i=n; i>=1; i--){
        for(int j=1; j<=n-i; j++){
            cout <<" ";
        }
        for(int j=1; j<=2*i-1; j++){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern10(int n){
    for(int i=1; i<=2*n-1; i++){
        int stars = (i <= n) ? i : 2*n - i;
        for(int j=1; j<=stars; j++){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern11(int n){
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if ((i + j) % 2 == 0)
                cout << "1 ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}
void pattern12(int n){
    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        for (int s = 1; s <= 2 * (n - i); s++) {
            cout << " ";
        }

        for (int j = i; j >= 1; j--) {
            cout << j;
        }

        cout << endl;
    }
}
void pattern13(int n){
    int count = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}
void pattern14(int n){
    for (int i = 1; i <= n; i++) {
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
}
void pattern15(int n){
    for (int i = n; i >= 1; i--) {
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
}
void pattern16(int n){
    char ch = 'A';
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << ch;
        }
        ch++;
        cout << endl;
    }
}
void pattern17(int n){
    for (int i = 1; i <= n; i++) {
        // Spaces
        for (int s = 1; s <= n - i; s++) {
            cout << " ";
        }
        char ch = 'A';
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << ch;
            if (j < i)
                ch++;   // increasing
            else
                ch--;   // decreasing
        }
        cout << endl;
    }
}
void pattern18(int n){
     for (int i = 1; i <= n; i++) {
        // char ch = 'A' + (n - i);   // starting character

        for (char ch = 'E' - i + 1; ch <= 'E'; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern19(int n){
    for (int i = 1; i <= 2*n; i++) {

        int row = (i <= n) ? i : (2 * n - i + 1);

        // Left stars
        for (int j = 1; j <= n - row + 1; j++)
            cout << "*";

        // Middle spaces
        for (int s = 1; s <= 2 * (row - 1); s++)
            cout << " ";

        // Right stars
        for (int j = 1; j <= n - row + 1; j++)
            cout << "*";

        cout << endl;
    }
}
void pattern20(int n){
    for (int i = 1; i <= 2*n - 1; i++) {
        int row = (i <= n) ? i : (2 * n - i);
        // Left stars
        for (int j = 1; j <= row; j++)
            cout << "*";
        // Middle spaces
        for (int s = 1; s <= 2 * (n - row); s++)
            cout << " ";
        // Right stars
        for (int j = 1; j <= row; j++)
            cout << "*";
        cout << endl;
    }
}
void pattern21(int n){
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n)
                cout << "*";
            else
            cout << " ";
        }
        cout << endl;
    }
}
void pattern22(int n){
    int size = 2 * n - 1;
    int center = n - 1;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int value = max(abs(i - center), abs(j - center)) + 1;
            cout << value << " ";
        }
        cout << endl;
    }
}
int main() {
    int n = 4;
    // cout << "Enter the number of rows: ";
    // cin >> n;
    pattern22(n);
    cout << endl;
    return 0;
}