#include <iostream>
using namespace std;

int main() {
    int a, b, sum;
    int *p1, *p2;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    p1 = &a;
    p2 = &b;

    sum = *p1 + *p2;

    cout << "Sum = " << sum;

    return 0;
}
