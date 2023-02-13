#include <iostream>
#include <ctime>

using namespace std;

int fibo1 = 0;
int fibo2 = 1;

int FibonacciRecursive(int n);
int FibonacciIterative(int n);

int main () {
    clock_t start, end;
    int n;
    double elapsed;
    cout << "Enter N: "; cin >> n;
    start = clock();
    cout << "At Position " << n << " is: " << FibonacciRecursive(n) << endl;
    end = clock();
    elapsed = ((double) (end - start)) / CLOCKS_PER_SEC;
    cout << "Elapsed time of Fibonacci Recursive method: " << elapsed << " seconds" << endl;
    start = clock();
    cout << "At Position " << n << " is: " << FibonacciIterative(n) << endl;
    end = clock();
    elapsed = ((double) (end - start)) / CLOCKS_PER_SEC;
    cout << "Elapsed time of Fibonacci Iterative method: " << elapsed << " seconds" << endl;
    return 0;
}

int FibonacciRecursive(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return FibonacciRecursive(n - 1) + FibonacciRecursive(n - 2);
}

int FibonacciIterative(int n) {
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