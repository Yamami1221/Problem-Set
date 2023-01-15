#include <iostream>

using namespace std;

int cheetah(int);

int main () {
    int Money, result;
    do
    {
        cout << "Enter money: "; cin >> Money;
        if (Money < 0) {
            cout << "Error! Money must be positive." << endl;
        }
    } while (Money < 0);
    result = cheetah(Money);
    cout << "You can buy " << result << " cheetahs." << endl;
}

int cheetah(int Money) {
    int result, price, coupon;
    price = 10;
    result = Money / price;
    coupon = result;
    while (coupon >= 3)
    {
        coupon = coupon - 3;
        result++;
        coupon++;
    }
    return result;
}