#include <iostream>
using namespace std;

int main() {
    int N, num, minNum, maxNum;
    cout << "Enter number of elements: ";
    cin >> N;

    if (N <= 0) {
        cout << "Invalid input!" << endl;
        return 0;
    }

    cout << "Enter numbers: ";
    cin >> num;
    minNum = maxNum = num;

    for (int i = 1; i < N; i++) {
        cin >> num;
        if (num < minNum) minNum = num;
        if (num > maxNum) maxNum = num;
    }

    cout << "Minimum: " << minNum << "\nMaximum: " << maxNum << endl;
    return 0;
}
