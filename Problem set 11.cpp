#include <iostream>

using namespace std;

int fibo1 = 0;
int fibo2 = 1;

int fibo(int n) {
    int temp;
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        for (int i = 3; i <= n; i++) {
            temp = fibo1 + fibo2;
            fibo1 = fibo2;
            fibo2 = temp;
        }
    }
    return temp;
}

int main () {
    int n;
    cout << "Enter N: "; cin >> n;
    cout << "At Position " << n << " is: " << fibo(n);
}