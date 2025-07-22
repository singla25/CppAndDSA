// Bitwise Operator - AND &, OR |, NOT ~, XOR ^

#include <iostream>
using namespace std;

int main() {
    int a = 5;             // Binary: 0101
    int b = 3;             // Binary: 0011
    int resultAND = a & b; // 0101 & 0011 = 0001 => 1
    int resultOR = a | b;  // 0101 | 0011 = 0111 => 7
    int resultXOR = a ^ b; // 0101 ^ 0011 = 0110 => 6
    int resultNOT = ~a;    // If a = 5 (0101), result = -(5+1) = -6
    
    cout << "a = 5 and b = 3" << endl;
    cout << "resultAND (a&b) : " << resultAND << endl;
    cout << "resultOR (a|b) : " << resultOR << endl;
    cout << "resultXOR (a^b) : " << resultXOR << endl;
    cout << "resultNOT (~a) : " << resultNOT << endl;
    cout << endl;

    cout << "Right Shift (17 >> 1): " << (17 >> 1) << endl;
    cout << "Right Shift (17 >> 2): " << (17 >> 2) << endl;
    cout << "Left Shift (17 << 1): " << (17 << 1) << endl;
    cout << "Left Shift (17 << 2): " << (17 << 2) << endl;
    cout << "Left Shift (19 << 1): " << (19 << 1) << endl;
    cout << "Left Shift (21 << 2): " << (21 << 2) << endl;
    cout << endl;
    
    // increment and decrement
    int i = 7;

    cout << "pre increment ++i (i = 7): " << ++i << endl;
    cout << "post increment i++ (i = 8): " << i++ << endl;
    cout << "pre increment --i (i = 9): " << --i << endl;
    cout << "pre increment i-- (i = 8): " << i-- << endl;
    cout << endl;

    // int x, y = 1;
    // x = 10;
    // if (++x) { 
    //     cout << y;
    // } else {
    //     cout << ++y;
    // }

    // int x = 1, y = 2;
    // if(x-- > 0 && ++y > 2) {
    //     cout << "Stage1 - inside If ";
    // } else {
    //     cout << "Stage2 - Inside Else";
    // }

    // int x = 1, y = 2;
    // if(x-- > 0 || ++y > 2) {
    //     cout << "Stage1 - inside If ";
    // } else {
    //     cout << "Stage2 - Inside Else";
    // }

    // int number = 3;
    // cout << (25 * (++number));

    int x = 1, y = x++, z = ++x;
    cout << y << endl;
    cout << z << endl;
    return 0;
}

