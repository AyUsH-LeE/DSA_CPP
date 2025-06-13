#include <iostream>
using namespace std;

int main() {
    int N, sum = 0, count = 0;
    cout << "Enter array size: ";
    cin >> N;
    int arr[N];

    cout << "Enter " << N << " numbers:\n";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    float avg = float(sum) / N;

    for (int i = 0; i < N; i++)
        if (arr[i] > avg) count++;

    cout << "Average: " << avg << "\nElements greater than average: " << count << endl;

    return 0;
}
