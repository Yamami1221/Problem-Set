#include <iostream>

using namespace std;

const int N = 3;

void inputMatrix(double [][N]);

void matrixMultiply(const double [][N], const double [][N], double [][N]);

void showMatrix(const double [][N]);

int main() {
    double A[N][N], B[N][N], C[N][N];
    cout << "Input the first matrix.....\n";
    inputMatrix(A);
    cout << "Input the second matrix.....\n";
    inputMatrix(B);
    matrixMultiply(A,B,C);
    cout << "Result is \n";
    showMatrix(C);
    return 0;
}

void inputMatrix(double A[][N]) {
    for (int i = 0; i < N; i++) {
        cout << "Row " << i + 1 << " : ";
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }
}

void matrixMultiply(const double A[][N], const double B[][N], double C[][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            C[i][j] = 0;
            for (int k = 0; k < N; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void showMatrix(const double A[][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}