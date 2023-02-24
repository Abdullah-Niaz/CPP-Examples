#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a;
    float b;
    char c;
    string d;
    double e;
    long f;

    cout << "Size of int" << sizeof(a) << endl;
    cout << "Size of float" << sizeof(b) << endl;
    cout << "Size of char" << sizeof(c) << endl;
    cout << "Size of string" << sizeof(d) << endl;
    cout << "Size of double" << sizeof(e) << endl;
    cout << "Size of long" << sizeof(f) << endl;
    return 0;
}