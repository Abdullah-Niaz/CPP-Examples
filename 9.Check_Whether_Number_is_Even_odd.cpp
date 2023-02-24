#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Value to check: ";
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n << " It's Even Number";
    }
    else
    {
        cout << n << "It' Odd Number";
    }
    return 0;
}