#include <iostream>
#include <vector>
using namespace std;

int secondLargest(const vector<int>& arr) {
    int largest = INT_MIN, secondLargest = INT_MIN;
    for (int num : arr) {
        if (num > largest) {
            secondLargest = largest;
            largest = num;
        } else if (num > secondLargest && num != largest)
            secondLargest = num;
    }
    return secondLargest;
}

int main() {
    int N;
    cout << "Enter size of list: ";
    cin >> N;
    vector<int> arr(N);

    cout << "Enter numbers:\n";
    for (int i = 0; i < N; i++) cin >> arr[i];

    cout << "Second largest number: " << secondLargest(arr) << endl;
    return 0;
}
