#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int num) {
    int sum = 0, temp = num, digits = to_string(num).length();
    while (temp > 0) {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }
    return sum == num;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << (isArmstrong(num) ? "Armstrong Number" : "Not an Armstrong Number") << endl;
    return 0;
}
