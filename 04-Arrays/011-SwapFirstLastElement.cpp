#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter array size: ";
    cin >> N;
    int arr[N];

    cout << "Enter " << N << " numbers:\n";
    for (int i = 0; i < N; i++) cin >> arr[i];

    if (N > 1) {
        int temp = arr[0];
        arr[0] = arr[N - 1];
        arr[N - 1] = temp;
    }

    cout << "Modified Array:\n";
    for (int i = 0; i < N; i++) cout << arr[i] << " ";

    return 0;
}
