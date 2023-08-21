#include <iostream>

using namespace std;

//if input is N, M = 6 6
// Reading sequence is:
//  1  2  6  7  15 16
//  3  5  8  14 17 26
//  4  9  13 18 25 27
//  10 12 19 24 28 33
//  11 20 23 29 32 34
//  21 22 30 31 35 36

const int MAX = 100;

void zigzagscan(int data[][MAX],int N,int M) {
    
}

int main() {
    int N, M;
    cout << "N, M = "; cin >> N >> M;
    int data[MAX][MAX];
    zigzagscan(data,N,M);
    cout << "The sequence is: " << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << data[i][j] << " ";
        }
        cout << endl;
    }
}