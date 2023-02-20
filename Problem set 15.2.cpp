#include<iostream>

using namespace std;

template <typename T>
void quicksort(T *,T *);

template <typename T>
T * partition(T *,T *);

template <typename T>
void swap(T *,T *);

int main() {
    int data[10] = {7,2,4,5,6,7,0,1,9,3};
    int *p1 = &data[0];
    int *p2 = &data[9];

    quicksort(p1,p2);

    for (int *i = p1; i <= p2; i++) {
        cout << *i << " ";
    }
    cout << endl;
    return 0;
}

template <typename T>
void quicksort(T *p1,T *p2) {
    if (p1 < p2) {
        T *pivot = partition(p1,p2);
        quicksort(p1,pivot - 1);
        quicksort(pivot + 1,p2);
    }
}

template <typename T>
T * partition(T *p1,T *p2) {
    T *pivot = p2;
    T *i = p1 - 1;
    for (T *j = p1; j < p2; j++) {
        if (*j < *pivot) {
            i++;
            swap(i,j);
        }
    }
    swap(i + 1,pivot);
    return i + 1;
}

template <typename T>
void swap(T *a,T *b) {
    T temp = *a;
    *a = *b;
    *b = temp;
}