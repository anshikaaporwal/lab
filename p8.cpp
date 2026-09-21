#include <iostream>
using namespace std;

int main()
{
    int num, a, b, c, sum;

    cout << "Enter a 3-digit number: ";
    cin >> num;

    a = num / 100;          // Hundreds digit
    b = (num / 10) % 10;    // Tens digit
    c = num % 10;           // Units digit

    sum = a*a*a + b*b*b + c*c*c;

    if (sum == num)
        cout << "Armstrong number";
    else
        cout << "Not an Armstrong number";

    return 0;
}
