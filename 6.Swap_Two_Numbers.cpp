#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 20, temp;
    cout << "Value of a & b Before swaping" << endl;
    cout << "Value of a:" << a << endl;
    cout << "Value of b:" << b << endl;

    // Declare a Third variable and Assign it to one value
    temp = a;
    a = b;
    b = temp;
    cout << "Value of a & b After swaping" << endl;
    cout << "Value of a:" << a << endl;
    cout << "Value of b:" << b << endl;
    return 0;
}