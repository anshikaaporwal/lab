#include <iostream>
using namespace std;

int main() {
    int arr[100], n;
    int *ptr;

    cout << "Enter the number of elements: ";
    cin >> n;

    ptr = arr;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> *ptr;
        ptr++;
    }

    cout << "Array elements are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
