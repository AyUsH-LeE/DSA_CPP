#include <iostream>
#include <vector>
using namespace std;

struct EvenOddLists {
    vector<int> even;
    vector<int> odd;
};

EvenOddLists splitEvenOdd(const vector<int>& arr) {
    EvenOddLists result;
    for (int num : arr) {
        if (num % 2 == 0) result.even.push_back(num);
        else result.odd.push_back(num);
    }
    return result;
}

int main() {
    int N;
    cout << "Enter number of elements: ";
    cin >> N;
    vector<int> arr(N);

    cout << "Enter numbers:\n";
    for (int i = 0; i < N; i++) cin >> arr[i];

    EvenOddLists lists = splitEvenOdd(arr);

    cout << "Even numbers: ";
    for (int num : lists.even) cout << num << " ";

    cout << "\nOdd numbers: ";
    for (int num : lists.odd) cout << num << " ";
    
    return 0;
}
