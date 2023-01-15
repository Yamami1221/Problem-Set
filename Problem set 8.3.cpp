#include <iostream>

using namespace std;

int main () {
    long long int n, min = 99999999999;
    do
    {
        cout << "Input Number: "; cin >> n;
        if (n < min && n > 0) {
            min = n;
        }
    } while (n > 0);
    cout << "The smallest number is " << min << endl;
}