#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

const int MAX = 10;

void randomMatrix(double [][MAX], int, int);

int main () {
    srand(time(NULL));
    double array[MAX][MAX];
    randomMatrix(array, MAX, MAX);
    cout << "The matrix is: " << endl;
    cout << fixed << setprecision(3);
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    return EXIT_SUCCESS;
}

void randomMatrix(double array[][MAX], int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            array[i][j] = double(rand() % 10000) / 1000;
        }
    }
}