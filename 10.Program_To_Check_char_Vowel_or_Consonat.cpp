#include <iostream>
using namespace std;

int main()
{
    char c;
    cout << "Enter the Vowel: ";
    cin >> c;
    bool islowerCaseVowel, isUpperCaseVowel;
    islowerCaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    isUpperCaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (!isalpha(c))
    {
        cout << c << " Error Non Alphabet Character";
    }
    else if (islowerCaseVowel || isUpperCaseVowel)
    {
        cout << c << " is a vowel";
    }
    else
    {
        cout << c << " is a consonat";
    }
    return 0;
}