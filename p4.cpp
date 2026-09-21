#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[100], n;
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN)
        cout << "Second-largest element does not exist.";
    else
        cout << "Second-largest element = " << secondLargest;

    return 0;
}
