#include <iostream>
using namespace std;

int main() {
    int num;
    int *ptr;

    cout << "Enter a number: ";
    cin >> num;

    ptr = &num;

    cout << "Value of variable = " << num << endl;
    cout << "Address of variable = " << ptr;

    return 0;
}
