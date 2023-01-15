#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {
    int n = 333;
    long int sum = 0;
    for (int i = 3; i <= n; i += 3) {
        if (i % 6 == 0) {
            sum += pow(i, 3);
        } else {
            sum += pow(i, 2);
        }
    }
    cout << "The sum of 3^2 + 6^3 + 9^2 + ... + " << n << "^" << ((n % 6 == 0) ? 2 : 3) << " is " << fixed << setprecision(10) << sum << endl;
}