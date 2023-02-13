#include <iostream>
#include <cmath>

using namespace std;

int Function1(int n);
int Function2(int n);
double Function3(double n);

int main () {
    int n;
    cout << "Enter N: "; cin >> n;
    cout << "Function1: " << Function1(n) << endl;
    cout << "Function2: " << Function2(n) << endl;
    cout << "Function3: " << Function3(n) << endl;
    return 0;
}

int Function1(int n) {
    if (n == 1) return 2;
    return pow(2, n) + Function1(n - 1);
}

int Function2(int n) {
    if (n == 1) return 1;
    return sqrt(n*Function2(n - 1));
}

double Function3(double n) {
    if (n == 0) return 1;
    return 1 + (n / Function3(n - 1));
}