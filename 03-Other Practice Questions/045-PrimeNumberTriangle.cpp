#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0) return false;
    return true;
}

int main() {
    int N, count = 0, num = 2;
    cout << "Enter number of rows: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            while (!isPrime(num))
                num++;
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    return 0;
}
