#include <iostream>
using namespace std;

int countPositive(int arr[], int N) {
    int count = 0;
    for (int i = 0; i < N; i++)
        if (arr[i] > 0) count++;
    return count;
}

int main() {
    int N;
    cout << "Enter array size: ";
    cin >> N;
    int arr[N];

    cout << "Enter " << N << " numbers:\n";
    for (int i = 0; i < N; i++) cin >> arr[i];

    cout << "Positive numbers count: " << countPositive(arr, N) << endl;
    return 0;
}
