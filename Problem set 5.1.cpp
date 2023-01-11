#include <iostream>

using namespace std;

int main () {
    int n, count;
    string text1, text2;

    cout << "Enter N: "; cin >> n;
    cout << "Enter text1: "; cin >> text1;
    cout << "Enter text2: "; cin >> text2;
    while (count < n) {
        if (count % 2 == 0) {
            cout << text1 << " ";
        } else {
            cout << text2 << " ";
        }
        count++;
    }
}