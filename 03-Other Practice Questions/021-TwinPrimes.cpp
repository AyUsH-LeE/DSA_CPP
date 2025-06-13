#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0) return false;
    return true;
}

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    for (int i = 2; i <= N - 2; i++) {
        if (isPrime(i) && isPrime(i + 2))
            cout << "(" << i << ", " << i + 2 << ")\n";
    }
    
    return 0;
}
