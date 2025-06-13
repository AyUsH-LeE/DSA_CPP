#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter array size: ";
    cin >> N;
    int arr[N];

    cout << "Enter " << N << " numbers:\n";
    for (int i = 0; i < N; i++) cin >> arr[i];

    for (int i = 0; i < N; i++) {
        if (arr[i] % 2 == 0)
            cout << "Square of " << arr[i] << ": " << arr[i] * arr[i] << endl;
        else
            cout << "Cube of " << arr[i] << ": " << arr[i] * arr[i] * arr[i] << endl;
    }

    return 0;
}
