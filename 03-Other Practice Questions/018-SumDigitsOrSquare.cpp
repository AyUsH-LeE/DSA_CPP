#include <iostream>
using namespace std;

int sumDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0)
            cout << "Sum of digits of " << i << " is " << sumDigits(i) << endl;
        else
            cout << "Square of " << i << " is " << i * i << endl;
    }

    return 0;
}
