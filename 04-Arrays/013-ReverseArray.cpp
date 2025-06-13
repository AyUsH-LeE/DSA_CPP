#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter array size: ";
    cin >> N;
    int arr[N];

    cout << "Enter " << N << " numbers:\n";
    for (int i = 0; i < N; i++) cin >> arr[i];

    cout << "Reversed array:\n";
    for (int i = N - 1; i >= 0; i--) cout << arr[i] << " ";

    return 0;
}
