#include <iostream>
using namespace std;

int main() {
    int N, num, positive = 0, negative = 0, zero = 0;
    cout << "Enter number of elements: ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        cout << "Enter number: ";
        cin >> num;
        if (num > 0)
            positive++;
        else if (num < 0)
            negative++;
        else
            zero++;
    }

    cout << "Positive: " << positive << "\nNegative: " << negative << "\nZero: " << zero << endl;
    return 0;
}
