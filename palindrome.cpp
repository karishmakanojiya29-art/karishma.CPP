#include <iostream>
using namespace std;

int main()
{
    string s, rev= "";
    cout << "Enter a string: ";
    cin >> s;

    for (int i = s.length() - 1; i >= 0; i--)
    {
        rev += s[i];
    }


    if (s == rev)
    {
        cout << "The string is a palindrome." << endl;
    }
    else
    {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}