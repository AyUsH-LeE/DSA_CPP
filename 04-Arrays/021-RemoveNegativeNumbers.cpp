#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter array size: ";
    cin >> N;
    int arr[N];

    cout << "Enter " << N << " numbers:\n";
    for (int i = 0; i < N; i++) cin >> arr[i];

    cout << "Positive numbers:\n";
    for (int i = 0; i < N; i++)
        if (arr[i] >= 0) cout << arr[i] << " ";

    return 0;
}
