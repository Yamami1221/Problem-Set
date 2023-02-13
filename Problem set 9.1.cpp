#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Please input board size : "; cin >> N;
    N++;

    for (int i = 1; i < N; i++) {
        for (int j = 1; j < N - 1; j++) {
            cout << "   ";
            if (j < N - 1) cout << "|";
        }
        cout << endl;
        if (i < N - 1) {
            for (int j = 1; j < N; j++) {
                cout << "---";
                if (j < N - 1) cout << "+";
            }
            cout << endl;
        }
    }
        
}