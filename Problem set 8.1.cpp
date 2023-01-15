#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    int n = 222;
    double sum = 0;
    for (int i = 2; i <= n; i += 2) {
        sum += 1.0 / i;
    }
    cout << "The sum of 1/2 + 1/4 + 1/6 + ... + 1/" << n << " is " << fixed << setprecision(10) << sum << endl;
}