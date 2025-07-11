#include<iostream>
using namespace std;

int main() {
    cout << "Arithematic Operator" << endl;
    
    int a = 2/5;
    cout << a << endl;

    int b = 2.5/5;
    cout << b << endl;

    float c = 2.0/5;
    cout << c << endl;

    double d = 2.5/5;
    cout << d << endl;

    cout << endl;
    cout << "Relational Operator" << endl;

    int e = 2;
    int f = 3;

    bool first = (e==f);
    cout << first << endl;

    bool second = (e>f);
    cout << second << endl;

    bool third = (e<f);
    cout << third << endl;

    bool fourth = (e>=f);
    cout << fourth << endl;

    bool fifth = (e<=f);
    cout << fifth << endl;

    bool sixth = (e!=f);
    cout << sixth << endl;

    cout << endl;
    cout << "Logical Operator" << endl;

    int g = 21;
    cout << !g << endl;
} 