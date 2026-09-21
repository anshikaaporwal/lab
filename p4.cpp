#include <iostream>
using namespace std;

int main() {
    int num;
    int *ptr;

    cout << "Enter an integer: ";
    cin >> num;

    ptr = &num;

    (*ptr)++;
    cout << "After increment = " << *ptr << endl;

    (*ptr)--;
    cout << "After decrement = " << *ptr << endl;

    return 0;
}
