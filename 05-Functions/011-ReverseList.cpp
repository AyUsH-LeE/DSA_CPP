#include <iostream>
#include <vector>
using namespace std;

vector<int> reverseList(const vector<int>& arr) {
    vector<int> reversed(arr.rbegin(), arr.rend());
    return reversed;
}

int main() {
    int N;
    cout << "Enter size of list: ";
    cin >> N;
    vector<int> arr(N);

    cout << "Enter numbers:\n";
    for (int i = 0; i < N; i++) cin >> arr[i];

    vector<int> reversed = reverseList(arr);
    cout << "Reversed list: ";
    for (int num : reversed) cout << num << " ";

    return 0;
}
