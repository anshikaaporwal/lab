#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c;
    float D, root1, root2;

    cout << "Enter a, b and c: ";
    cin >> a >> b >> c;

    D = b * b - 4 * a * c;

    if (D > 0)
    {
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);

        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    }
    else if (D == 0)
    {
        root1 = -b / (2 * a);

        cout << "Both roots are equal." << endl;
        cout << "Root = " << root1;
    }
    else
    {
        cout << "Roots are complex.";
    }

    return 0;
}
