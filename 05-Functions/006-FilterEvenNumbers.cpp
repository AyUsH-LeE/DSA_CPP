#include <iostream>
#include <vector>
using namespace std;

vector<int> filterEven(const vector<int>& arr) {
    vector<int> result;
    for (int num : arr)
        if (num % 2 == 0) result.push_back(num);
    return result;
}

int main() {
    int N;
    cout << "Enter size of list: ";
    cin >> N;
    vector<int> arr(N);

    cout << "Enter numbers:\n";
    for (int i = 0; i < N; i++) cin >> arr[i];

    vector<int> evenNumbers = filterEven(arr);
    cout << "Even numbers: ";
    for (int num : evenNumbers) cout << num << " ";

    return 0;
}
