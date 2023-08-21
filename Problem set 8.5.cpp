#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int burnerLocation[100], LastBurnerLocation = 0, time = 0,i = 0, burnDistance[100];
    for (int j = 0; j < 100; j++) {
        burnerLocation[j] = 0;
        burnDistance[j] = 0;
    }
    do {
        cout << "Input the burner location : "; cin >> burnerLocation[i];
        if (burnerLocation[i] >= 100) {
            burnDistance[i] = burnerLocation[i] - LastBurnerLocation;
            LastBurnerLocation = burnerLocation[i];
            break;
        } else
        if (burnerLocation[i] > LastBurnerLocation || burnerLocation[i] == 0) {
            burnDistance[i] = burnerLocation[i] - LastBurnerLocation;
            LastBurnerLocation = burnerLocation[i];
            i++;
        } else {
            cout << "Next burner location must be greater than " << LastBurnerLocation << "." << endl;
        }
    } while (burnerLocation[i - 1] <= 100 && burnerLocation[i - 1] >= 0);
    time = *(max_element(burnDistance, burnDistance + i))/10;
    cout << "Burning complete in " << time << " sec." << endl;
}