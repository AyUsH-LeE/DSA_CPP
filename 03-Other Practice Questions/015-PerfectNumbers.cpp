#include <iostream>
using namespace std;

bool isPerfect(int num) {
    int sum = 1;  // 1 is always a divisor
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i) sum += num / i;
        }
    }
    return sum == num && num != 1;
}

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        if (isPerfect(i))
            cout << i << " ";
    }
    return 0;
}
