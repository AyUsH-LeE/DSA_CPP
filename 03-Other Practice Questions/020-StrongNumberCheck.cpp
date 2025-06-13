#include <iostream>
using namespace std;

long long factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; i++)
        fact *= i;
    return fact;
}

bool isStrong(int num) {
    int sum = 0, temp = num;
    while (temp > 0) {
        sum += factorial(temp % 10);
        temp /= 10;
    }
    return sum == num;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << num << (isStrong(num) ? " is a Strong number.\n" : " is NOT a Strong number.\n");
    return 0;
}
