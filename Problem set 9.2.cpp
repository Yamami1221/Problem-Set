#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    int min, max, count = 0;
    string text;
    ifstream source;
    source.open("score.txt");
    if (source.fail()) {
        cout << "File open failed. " << endl;
        return EXIT_FAILURE;
    }
    cout << "Enter range of the scores [min,max] for counting: "; cin >> min >> max;
    if (min > max) {
        cout << "Invalid input. (max >= min)" << endl;
        return EXIT_FAILURE;
    }
    while (source >> text) {
        if (stod(text) >= min && stod(text) <= max) count++;
    }
    cout << "The number of students who have scores in this range = " << count << endl;
}