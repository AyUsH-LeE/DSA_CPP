#include <iostream>
using namespace std;

void bubbleSort(int arr[], int N) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int N;
    cout << "Enter array size: ";
    cin >> N;
    int arr[N];

    cout << "Enter " << N << " numbers:\n";
    for (int i = 0; i < N; i++) cin >> arr[i];

    bubbleSort(arr, N);

    cout << "Sorted array:\n";
    for (int i = 0; i < N; i++) cout << arr[i] << " ";
    cout << endl;
    
    return 0;
}
