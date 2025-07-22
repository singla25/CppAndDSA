#include <iostream>
using namespace std;

int main() {
    // int n;
    // cout << "Enter the value of n: ";
    // cin >> n;
    // cout << "Printing count from 1 to " << n << endl;
    
    // for (int i = 1; i <= n; i++) {
    //     cout << i << ' ';
    // }
    // cout << endl;

    // int j = 1;
    // for( ; j <= n; j++){
    //      cout << j << endl;
    // }
    // cout << endl;

    // int k = 1;
    // for( ; k <= n; ){
    //      cout << k << ' ';
    //      k++;
    // }
    // cout << endl;

    // int l = 1;
    // for( ; ; ){
    //     if(l <= n) {
    //         cout << l << endl;
    //         l++;
    //     }
    // }
    // cout << endl;

    // int m = 1;
    // for( ; ; ){
    //     if(m <= n) {
    //         cout << m << ' ';
    //     }
    //     m++;
    // }
    // cout << endl; 
    // it is infanite loop
    
    // int m = 1;
    // for(; ; ){
    //     if(m <= n) {
    //         cout << m << '*';
    //     } else {
    //         break;
    //     }
    //     m++;
    // }

    // for(int a = 4, b = 3; a >= 0 && b >=1; a--, b--) {
    //     cout << a << ' ' << b << endl;
    // }

    // int n;
    // cout << "Enter your number: ";
    // cin >> n;
    // int sum = 0;
    // for (int i = 1; i <= n; i++) {
    //     sum += i;
    // }
    // cout << "Sum of 1 to " << n << " number: " << sum << endl;

    // fibonacci series
    // int n;
    // cout << "Enter your number: ";
    // cin >> n;
    // int a = 0;
    // int b = 1;
    // cout << a << " " << b << " ";
    // for (int i = 1; i <= n-2; i++) {
    //     int nextNumber = a + b;
    //     cout << nextNumber << " ";
    //     a = b;
    //     b = nextNumber;
    // }

    // prime number
    int n;
    cout << "Enter your number: ";
    cin >> n;

    bool isPrime = 1;

    for (int i = 2; i < n; i++){
        int checkPrime = n%i;
        if (checkPrime == 0) {
            isPrime = 0;
            break;
        }
    }

    if(isPrime == 0) {
        cout << n << " is a not prime number" << endl;
    } else {
        cout << n << " is a prime number" << endl;
    }
}