#include <iostream>
using namespace std;

int main() {
    int a[10][10], b[10][10];
    int sum[10][10], product[10][10] = {0};
    int r1, c1, r2, c2;

    // Input size of first matrix
    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;

    // Input size of second matrix
    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;

    // Input first matrix
    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> a[i][j];
        }
    }

    // Input second matrix
    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cin >> b[i][j];
        }
    }

    // Matrix Addition
    if (r1 == r2 && c1 == c2) {
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                sum[i][j] = a[i][j] + b[i][j];
            }
        }

        cout << "\nAddition of matrices:\n";
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                cout << sum[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "\nAddition is not possible.\n";
    }

    // Matrix Multiplication
    if (c1 == r2) {
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                for (int k = 0; k < c1; k++) {
                    product[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        cout << "\nMultiplication of matrices:\n";
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                cout << product[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "\nMultiplication is not possible.";
    }

    return 0;
}
