#include <iostream>

using namespace std;

int main () {
    char letter;
    cout << "Enter a letter: "; cin >> letter;
    switch (letter) {
        case 'A':
            cout << "Awesome" << endl;
            break;
        case 'B':
            cout << "Great" << endl;
            break;
        case 'C':
            cout << "Good" << endl;
            break;
        case 'F':
            cout << "Noob" << endl;
            break;
        default:
            cout << "Error: Invalid Input" << endl;
    }
}