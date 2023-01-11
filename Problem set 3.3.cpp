#include <iostream>

using namespace std;

double findKinetiEnergy(double mass, double velocity) {
    double kineticEnergy;
    kineticEnergy = 0.5 * mass * velocity * velocity;
    return kineticEnergy;
}

int main () {
    double mass, velocity, kineticEnergy;
    cout << "Enter mass in kg: ";
    cin >> mass;
    cout << "Enter velocity in m/s: ";
    cin >> velocity;
    kineticEnergy = findKinetiEnergy(mass, velocity);
    cout << "Kinetic energy is " << kineticEnergy << " J" << endl;
}