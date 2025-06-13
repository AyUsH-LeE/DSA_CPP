#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter size of array: ";
    cin >> N;
    int arr[N];

    cout << "Enter " << N << " numbers:\n";
    for (int i = 0; i < N; i++) cin >> arr[i];

    cout << "Even numbers: ";
    for (int i = 0; i < N; i++)
        if (arr[i] % 2 == 0) cout << arr[i] << " ";

    return 0;
}
