#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main() {
    // Generate random numbers
    srand(time(NULL));
    //1,2,3,4,5,6,7,8,…,100
    cout << rand() % 100 + 1 << endl;
    //2,4,6,8,10,12,…,24
    cout << rand() % 12 * 2 + 2 << endl;
    //-5,-4,-3,-2,0,1,2,3,4,5
    cout << rand() % 11 - 5 << endl;
    //2,4,8,16,32,…,1024
    cout << pow(2, rand() % 10 + 1) << endl;
}