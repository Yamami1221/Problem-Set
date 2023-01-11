#include <iostream>

using namespace std;

int findDivisor(int n) {
    int i, ans;
    i = n;
    while (i > 1){
        if (n % i == 0) {
            ans = i;
        }
        i--;
    }
    return ans;
}

int main () {
    int n, i;
    cout << "This is find divisors program" << endl;
    cout << "Enter a number: "; cin >> n;
    cout << "Divisors of " << n << " are: " << findDivisor(n) << endl;

}