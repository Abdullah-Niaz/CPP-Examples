#include <iostream>
using namespace std;

int main()
{
    // Take input from user and store it to variable
    int Divisor,
        Dividend,
        Quotient,
        Remainder;
    cout << "Enter Divisor: ";
    cin >> Divisor;
    cout << "Enter Dividend: ";
    cin >> Dividend;
    Quotient = Dividend / Divisor;
    Remainder = Dividend % Divisor;

    cout << "Quoitent Value is " << Quotient << endl
         << "Remainder Value is " << Remainder;
    return 0;
}