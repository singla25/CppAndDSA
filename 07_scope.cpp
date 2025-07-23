#include <iostream>
using namespace std;

// define greet() function outside main
void greet() {
    int a = 5;  // local to greet()
    cout << a << endl;

    if (true) {
        int a = 7;  // block scope
        cout << a << endl;
    }
}

int main() {
    int a = 3;  // local to main()
    cout << a << endl;

    greet();  // function call

    if(true) {
        int b = 10;
        cout << b << endl;
    }
    // cout << b << endl; - error

    // int a = 10; - error
    // cout << a << endl;

    int b = 15;
    cout << b << endl;

    int i = 4;
    cout << i << endl;

    for(int i = 0; i<= 8; i++){
        cout << " HI " << endl;
    }

    if(1) {
        int a;
        if(1) {
            int a;
            if(1) {
                int a;
            }
        }
    }
    return 0;
}