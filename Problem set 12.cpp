#include <iostream>

using namespace std;

template <typename T>
void insert(const T [], T [], int, T, int);

int main () {
    int N = 4;
    int x[N] = {1, 4, 9, 7}, y[N + 1], z[N + 1];

    insert(x, y, N, 69, 2);
    insert(x, z, N, 77, 0);

    cout << "x: ";
    for (int i = 0; i < N; i++) {
        cout << x[i] << " ";
    }
    cout << endl;

    cout << "y: ";
    for (int i = 0; i < N + 1; i++) {
        cout << y[i] << " ";
    }
    cout << endl;

    cout << "z: ";
    for (int i = 0; i < N + 1; i++) {
        cout << z[i] << " ";
    }
    cout << endl;
}

template <typename T>
void insert(const T x[], T y[], int N, T value, int pos) {
    for (int i = 0; i < pos; i++) {
        y[i] = x[i];
    }
    y[pos] = value;
    for (int i = pos + 1; i < N + 1; i++) {
        y[i] = x[i - 1];
    }
}