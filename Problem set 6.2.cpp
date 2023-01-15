#include <iostream>

using namespace std;

char isVowel(char);

int main () {
    char letter;
    cout << "Enter a letter: "; cin >> letter;
    cout << "The letter " << letter << " is " << (isVowel(letter) ? "" : "not ") << "a vowel." << endl;
}

char isVowel(char letter) {
    switch (letter) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            return true;
        default:
            return false;
    }
}