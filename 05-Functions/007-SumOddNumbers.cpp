#include <iostream>
#include <vector>
using namespace std;

int sumOddNumbers(const vector<int>& arr) {
    int sum = 0;
    for (int num : arr)
        if (num % 2 != 0) sum += num;
    return sum;
}

int main() {
    int N;
    cout << "Enter size of list: ";
    cin >> N;
    vector<int> arr(N);

    cout << "Enter numbers:\n";
    for (int i = 0; i < N; i++) cin >> arr[i];

    cout << "Sum of odd numbers: " << sumOddNumbers(arr) << endl;
    return 0;
}
