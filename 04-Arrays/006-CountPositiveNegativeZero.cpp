#include <iostream>
using namespace std;

int main() {
    int N, pos = 0, neg = 0, zero = 0;
    cout << "Enter array size: ";
    cin >> N;
    int arr[N];

    cout << "Enter " << N << " numbers:\n";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        if (arr[i] > 0) pos++;
        else if (arr[i] < 0) neg++;
        else zero++;
    }

    cout << "Positive: " << pos << "\nNegative: " << neg << "\nZero: " << zero << endl;
    return 0;
}
