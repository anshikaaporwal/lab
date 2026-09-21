#include <iostream>
using namespace std;

int main() {
    char str1[200], str2[100];
    char *p1, *p2;

    cout << "Enter first string: ";
    cin.getline(str1, 200);

    cout << "Enter second string: ";
    cin.getline(str2, 100);

    p1 = str1;
    p2 = str2;

    // Move p1 to the end of first string
    while (*p1 != '\0') {
        p1++;
    }

    // Copy second string to the end of first string
    while (*p2 != '\0') {
        *p1 = *p2;
        p1++;
        p2++;
    }

    *p1 = '\0';

    cout << "Concatenated string: " << str1;

    return 0;
}
