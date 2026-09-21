#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter n: ";
    cin >> n;

    cout << "Prime numbers between 1 and " << n << " are: ";

    for (int num = 2; num <= n; num++)
    {
        bool prime = true;

        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                prime = false;
                break;
            }
        }

        if (prime)
            cout << num << " ";
    }

    return 0;
}
