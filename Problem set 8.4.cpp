#include <iostream>

using namespace std;

void printPattern1(int a, int b) {
    if (a < 1 || b < 1) {
        cout << "Invalid input";
        return;
    }
    int count = 0;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            if (count % 2 == 1) {
                cout << "X";
            }
            else {
                cout << "O";
            }
            count++;
        }
        if (b % 2 == 0) {
            count++;
        }
        cout << endl;
    }
}

int main() {
    int a, b;
    cout << "Enter row: "; cin >> a;
    cout << "Enter column: "; cin >> b;
    printPattern1(a, b);
}