// even or odd
#include <iostream>
#include<math.h>
using namespace std;

int main() {

    // int n;
    // cout << "Enter your number: ";
    // cin >> n;

    // if (n & 1) {
    //     cout << "Odd" << endl;
    // } else {
    //     cout << "Even" << endl;
    // }
        
    // int n;
    // cout << "Enter your number: ";
    // cin >> n; 

    // int ans = 0;
    // int place = 1;  // 10^0 initially
    // while (n != 0) {
    //     int bit = n & 1;
    //     ans = (bit * place) + ans;
    //     place *= 10;
    //     n = n >> 1;
    // }
    // cout << "Answer is: " << ans << endl;   

    int n;
    cout << "Enter you binary number: ";
    cin >> n;

    int ans = 0;
    int i = 0;
    while (n != 0) {
        int digit = n % 10;
        if (digit == 1) {
            ans = ans + pow(2, i);
        }
        n = n/10;
        i++;
    }
    cout << "Your number from binary number: " << ans << endl;

    return 0;
}
