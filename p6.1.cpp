#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    switch (ch)
    {
        case 'A' ... 'Z':
            cout << "Capital letter";
            break;

        case 'a' ... 'z':
            cout << "Small case letter";
            break;

        case '0' ... '9':
            cout << "Digit";
            break;

        default:
            cout << "Special symbol";
    }

    return 0;
}
