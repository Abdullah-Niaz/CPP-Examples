#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 30, c = 20;
    if (a > b & a > c)
    {
        cout << "First is greater: " << a << endl;
    }
    else if (b > c)
    {
        cout << "Second is greater: " << b << endl;
    }
    else
    {
        cout << "Third is greater: " << c << endl;
    }
    return 0;
}