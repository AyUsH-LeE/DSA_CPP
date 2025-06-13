#include <iostream>
using namespace std;

int findMax(int arr[], int N) {
    int maxNum = arr[0];
    for (int i = 1; i < N; i++)
        if (arr[i] > maxNum) maxNum = arr[i];
    return maxNum;
}

int main() {
    int N;
    cout << "Enter array size: ";
    cin >> N;
    int arr[N];

    cout << "Enter " << N << " numbers:\n";
    for (int i = 0; i < N; i++) cin >> arr[i];

    cout << "Maximum number: " << findMax(arr, N) << endl;
    return 0;
}
