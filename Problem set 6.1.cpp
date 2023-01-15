#include <iostream>
#include <string>

using namespace std;

int function(string);

int main () {
    bool inputcorrect = false;
    string text;
    int result;
    do {
        cout << "Enter text: "; cin >> text;
        for (int i = 0; i < text.length(); i++)
        {
            if (text[i] != 'X' && text[i] != 'Y') {
                cout << "Error! Text must contain only X and Y." << endl;
                break;
            } else if (i == text.length() - 1) {
                inputcorrect = true;
            }
        }
    } while (inputcorrect == false);
    result = function(text);
    cout << "The result is " << result << "." << endl;
}

int function(string text) {
    int x = 0, y = 0;
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == 'X') {
            x++;
        } else if (text[i] == 'Y') {
            y++;
        }
    }
    // cout << "X = " << x << ", Y = " << y << endl;
    if (x == y) {
        return 0;
    } else {
        return x > y ? 1 : -1;
    }
}