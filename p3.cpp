#include <iostream>
using namespace std;

int main()
{
    float a, b, c, d, e, f, g;

    cout << "Enter values of a, b, c, d, e, f, g: ";
    cin >> a >> b >> c >> d >> e >> f >> g;

    float result = (a + b / c * d - e) * (f - g);

    cout << "Result = " << result;

    return 0;
}
