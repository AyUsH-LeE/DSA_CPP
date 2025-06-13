#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter size of arrays: ";
    cin >> N;
    int arr1[N], arr2[N], sum[N];

    cout << "Enter elements of first array:\n";
    for (int i = 0; i < N; i++) cin >> arr1[i];

    cout << "Enter elements of second array:\n";
    for (int i = 0; i < N; i++) cin >> arr2[i];

    for (int i = 0; i < N; i++) sum[i] = arr1[i] + arr2[i];

    cout << "Element-wise sum:\n";
    for (int i = 0; i < N; i++) cout << sum[i] << " ";

    return 0;
}
