#include <iostream>
using namespace std;

int main() {
    int arr[100], n, sum = 0;
    int *ptr;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ptr = arr;

    for (int i = 0; i < n; i++) {
        sum += *ptr;
        ptr++;
    }

    cout << "Sum of array elements = " << sum;

    return 0;
}
