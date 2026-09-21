#include <iostream>
using namespace std;

int main() {
    int arr[100], n;
    int *ptr;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Pointer points to the first element
    ptr = arr;

    cout << "Array elements are: ";
    for (int i = 0; i < n; i++) {
        cout << *ptr << " ";
        ptr++;
    }

    return 0;
}
