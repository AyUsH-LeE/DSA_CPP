#include <iostream>
using namespace std;

void generateFibonacci(int N) {
    int a = 0, b = 1;
    for (int i = 1; i <= N; i++) {
        cout << b << " is " << (b % 2 == 0 ? "Even" : "Odd") << endl;
        int temp = a + b;
        a = b;
        b = temp;
    }
}

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;
    generateFibonacci(N);
    return 0;
}
