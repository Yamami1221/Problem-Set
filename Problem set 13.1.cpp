#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void selectionSort(int[], int);

int main() {
    srand(time(NULL));
    int array[10];
    cout << "Unsorted array: " << endl;
    for (int i = 0; i < 10; i++) {
        array[i] = rand() % 100;
    }
    for (int i = 0; i < 10; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    selectionSort(array, 10);
    cout << "Sorted array: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    return 0;
}

void selectionSort(int array[], int size) {
    for (int i = 0; i < size; i++) {
        int temp = array[i];
        int index = i;
        for (int j = i + 1; j < size; j++) {
            if (array[j] < temp) {
                temp = array[j];
                index = j;
            }
        }
        array[index] = array[i];
        array[i] = temp;
    }
    
}
