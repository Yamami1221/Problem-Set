#include <iostream>

using namespace std;

int greatDivisor(int n) {
    int i, ans;
    i = n - 1;
    while (i >= 1){
        if (n % i == 0) {
            ans = i;
            break;
        } else {
            ans = n;
        }
        i--;
    }
    return ans;
}

int main () {
    int n, ans;
    cout << "This program finds the greatest divisor of a positive integer. " << endl;
    cout << "Enter a positive integer: "; cin >> n;
    ans = greatDivisor(n);
    cout << "The greatest divisor of " << n << " is " << ans << endl;
}