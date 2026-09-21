#include <iostream>
using namespace std;

int main() {
    char str[100];
    char *ptr;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    ptr = str;

    cout << "String is: ";

    while (*ptr != '\0') {
        cout << *ptr;
        ptr++;
    }

    return 0;
}
