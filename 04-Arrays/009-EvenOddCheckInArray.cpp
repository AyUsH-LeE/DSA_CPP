#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter array size: ";
    cin >> N;
    int arr[N];

    cout << "Enter " << N << " numbers:\n";
    for (int i = 0; i < N; i++) cin >> arr[i];

    for (int i = 0; i < N; i++)
        cout << arr[i] << " is " << (arr[i] % 2 == 0 ? "Even" : "Odd") << endl;

    return 0;
}
