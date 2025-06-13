#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) fact *= i;
    return fact;
}

int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            int value = combination(i, j);
            cout << (value % 2 == 1 ? "*" : to_string(value)) << " ";
        }
        cout << endl;
    }

    return 0;
}
