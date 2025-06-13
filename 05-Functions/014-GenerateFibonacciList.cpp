#include <iostream>
#include <vector>
using namespace std;

vector<int> generateFibonacci(int N) {
    vector<int> fib = {0, 1};
    for (int i = 2; i < N; i++)
        fib.push_back(fib[i - 1] + fib[i - 2]);
    return fib;
}

int main() {
    int N;
    cout << "Enter N for Fibonacci sequence: ";
    cin >> N;

    vector<int> fibonacciNumbers = generateFibonacci(N);
    cout << "Fibonacci sequence:\n";
    for (int num : fibonacciNumbers) cout << num << " ";

    return 0;
}
