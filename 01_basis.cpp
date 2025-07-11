#include<iostream>
using namespace std;

int main() {
    cout << "Namaste Dunia 1" << endl;

    cout << "Namaste Dunia 2" << '\n';

    cout << "Namaste Dunia 3\n";

    cout << '\n';

    int a = 10;
    cout << a << endl;

    // char a = "z"; it doesn't work because we define a  with int 
    char b = 'c';
    cout << b << endl;

    bool bl = true;
    cout << bl << endl;

    float f = 1.2345;
    cout << f << endl;

    double d = 1.237;
    cout << d << endl;

    string greeting = "Hello";
    cout << greeting << endl;

    int sizea = sizeof(a);
    cout << "Size of int a is : " << sizea << endl;

    int sizeb = sizeof(b);
    cout << "Size of char b is : " << sizeb << endl;

    int sizebl = sizeof(bl);
    cout << "Size of bollen bl is : " << sizebl << endl;

    int sizef = sizeof(f);
    cout << "Size of float f is : " << sizef << endl;

    int sized = sizeof(d);
    cout << "Size of double d is : " << sized << endl;

    int z = 'a';
    cout << z << endl;

    char ch = 98;
    cout << ch << endl;

    // char bigInteger = 123456789; it gives error
    // cout << bigInteger << endl;

    unsigned int y = 12345;
    cout << y << endl;

    // signed int y = -12345;   gives undefined number as output 
    // cout << y << endl;

    string name = "Sahil";
    int age = 23;
    double height = 5.4;

    cout << name << " is " << age << " years old and " << height << " feet tall." << endl;
    
    // int u, v;
    // int sum;
    // cout << "Type a number: ";
    // cin >> u;
    // cout << "Type another number: ";
    // cin >> v;
    // cout << "Sum is: " << u+v;
}
