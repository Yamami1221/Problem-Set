#include <iostream>

using namespace std;

string pTu(int, int);

int main () {
    int P = 0, B = 0;
    do
    {
        cout << "Enter your Personality Score: "; cin >> P;
        cout << "Enter your Beauty Score: "; cin >> B;
        if ((P < 0 || B < 0) || (P > 100 || B > 100)) {
            cout << "Error: Invalid Input" << endl;
        }
    } while ((P < 0 || B < 0) || (P > 100 || B > 100));
    cout << pTu(P, B) << endl;
}

string pTu(int P, int B) {
    string result = "";
    if (B > 80 && P >= 50) {
        result = "Girlfriend";
    } else if (B > 80 && P < 50) {
        result = "One-night-stand";
    } else if (B <= 80 && B >= 50 && P >= 50) {
        result = "Friend";
    } else if (B <= 80 && B >= 50 && P < 50) {
        result = "One-night-stand";
    } else if (B < 50 && P >= 50) {
        result = "Friend";
    } else if (B < 60 && P < 50) {
        result = "Unfriend";
    }
    return result;
}