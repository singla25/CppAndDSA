#include<iostream>
using namespace std;

int main() {
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // int i = 1;
    // while (i <= n) {
    //     cout << i << " ";
    //     i++;
    // }

    // int n;
    // cout << "Enter a number: ";
    // cin >> n;
    // int i = 1, sum = 0;
    // while (i <= n) {
    //     sum = sum + i;
    //     i++;
    // }
    // cout << "The sum of numbers from 1 to " << n << " is: " << sum << endl;

    // int n;
    // cout << "Enter a number: ";
    // cin >> n;

    // int i = 2, sum = 0;
    // while (i <= n) {
    //     if (i % 2 == 0) {
    //         sum = sum + i;
    //     }
    //     i++;
    // }
    // cout << "The sum of even numbers from 1 to " << n << " is: " << sum << endl;

    // int n;
    // cout << "Enter a number: ";
    // cin >> n;

    // int i = 1, sum = 0;
    // while (i <= n) {
    //     if (i % 2 != 0) {
    //         sum = sum + i;
    //     }
    //     i++;
    // }
    // cout << "The sum of odd numbers from 1 to " << n << " is: " << sum << endl;

    // int startF, endF, stepF;

    // // Input start, end and step values
    // cout << "Enter starting Fahrenheit value: ";
    // cin >> startF;

    // cout << "Enter ending Fahrenheit value: ";
    // cin >> endF;

    // cout << "Enter step size: ";
    // cin >> stepF;

    // cout << "\nFahrenheit\tCelsius\n";
    // cout << "--------------------------\n";

    // int f = startF;
    // while (f <= endF) {
    //     float c = (f - 32) * 5.0 / 9; // Conversion formula
    //     cout << f << "\t\t" << c << endl;
    //     f = f + stepF;
    // }

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i = 2;
    while (i < n) {
        if (n % i == 0) {
            cout << "Not a prime number for " << i << endl;
        } else {
            cout << "Prime number for " << i << endl;
        }
        i = i + 1;
    }     
}