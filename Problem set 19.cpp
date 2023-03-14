#include <iostream>

using namespace std;

class People {
    public:
        char gender;
        int age;
        long long int money;
        double height;
        double weight;
        People *in_relation_with;
        bool flirt(People &);
};

bool People::flirt(People &target) {
    if (this->gender = 'M' && this->age > 18 && this->age < 25 && this->money > 2000000 && this->height > 170 && this->weight < 70) {
        this->in_relation_with = &target;
        target.in_relation_with = this;
        return true;
    } else {
        return false;
    }
}

int main() {
    People A, B;
    A.gender = 'M';
    A.age = 18;
    A.money = 2000;
    A.height = 170;
    A.weight = 60;
    B.gender = 'F';
    B.age = 18;
    B.money = 2000000000;
    B.height = 160;
    B.weight = 50;
    if (A.flirt(B)) {
        cout << "A is in relation with B" << endl;
    } else {
        cout << "A is not in relation with B" << endl;
    }
}