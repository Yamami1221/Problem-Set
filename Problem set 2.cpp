#include <iostream>

using namespace std;

int main () {
    int i, sum;
    sum = 0;
    while (i <= 50) {
        sum = sum + i * i;
        i = i + 1;
    }
    cout << "Sum of 10 squares to 50 squares is " << sum << endl;
}