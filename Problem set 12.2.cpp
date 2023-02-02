#include <iostream>
#include <cmath>

using namespace std;

const int MAX = 100;

double determinant(double matrix[][MAX], int n);

int main()
{
    double matrix[MAX][MAX];
    int N;
    cout << "Enter the size of the matrix: "; cin >> N;
    cout << "Enter the elements of the matrix: " << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << "matrix[" << i << "][" << j << "] = ";
            cin >> matrix[i][j];
        }
    }
    cout << "The determinant of the matrix is: " << determinant(matrix, N) << endl;
    return 0;
}

double determinant(double matrix[][MAX], int n)
{
    double det = 0;
    if (n == 1) {
        det = matrix[0][0];
    } else if (n == 2) {
        det = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    } else {
        for (int i = 0; i < n; i++) {
            double temp[MAX][MAX];
            for (int j = 0; j < n - 1; j++) {
                for (int k = 0; k < n - 1; k++) {
                    temp[j][k] = matrix[j + 1][(k >= i) ? k + 1 : k];
                }
            }
            det += pow(-1, i) * matrix[0][i] * determinant(temp, n - 1);
        }
    }
    return det;
}