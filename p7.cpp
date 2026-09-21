#include <iostream>
using namespace std;

int main() {
    int arr[100], n;
    int positive = 0, negative = 0;
    int odd = 0, even = 0;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (arr[i] > 0)
            positive++;

        if (arr[i] < 0)
            negative++;

        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Positive numbers = " << positive << endl;
    cout << "Negative numbers = " << negative << endl;
    cout << "Even numbers = " << even << endl;
    cout << "Odd numbers = " << odd << endl;

    return 0;
}
