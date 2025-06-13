#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter array size: ";
    cin >> N;
    int arr[N];

    cout << "Enter " << N << " numbers:\n";
    for (int i = 0; i < N; i++) cin >> arr[i];

    int maxNum = arr[0], minNum = arr[0];

    for (int i = 1; i < N; i++) {
        if (arr[i] > maxNum) maxNum = arr[i];
        if (arr[i] < minNum) minNum = arr[i];
    }

    cout << "Max: " << maxNum << "\nMin: " << minNum << endl;
    return 0;
}
