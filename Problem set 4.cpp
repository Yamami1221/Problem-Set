#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int A[10];

    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            A[i] = i;
        } else {
            A[i] = -i;
        }
    }

    for (int i = 0; i < 10; i++) {
        cout << A[i] << endl;
    }
}