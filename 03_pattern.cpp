#include<iostream>
using namespace std;

int main() {

    // int n;
    // cout << "Enter the number: ";
    // cin >> n;
    // int i = 1;  // rows
    // while (i <= n) {
    //     int j = 1; // columns
    //     while (j <= n) {
    //         cout << "* ";
    //         j++;
    //     }
    //     cout << endl;
    //      // Move to the next row
    //     i++;
    // }

    // int n;
    // cout << "Enter the number: ";
    // cin >> n;
    // int i = 1;
    // while (i <= n) {
    //     int j = 1;
    //     while (j <= n) {
    //         cout << i << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // int n;
    // cout << "Enter the number: ";
    // cin >> n;
    // int i = 1;
    // while (i <= n) {
    //     int j = 1;
    //     while (j <= n) {
    //         cout << j << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    int n;
    cout << "Enter the number: ";
    cin >> n;
    int i = 1;
    while (i <= n) {
        int j = i;
        while (j <= n) {
            cout << '*' << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}