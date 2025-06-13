#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> removeDuplicates(const vector<int>& arr) {
    unordered_set<int> seen;
    vector<int> uniqueList;

    for (int num : arr)
        if (seen.insert(num).second) uniqueList.push_back(num);

    return uniqueList;
}

int main() {
    int N;
    cout << "Enter size of list: ";
    cin >> N;
    vector<int> arr(N);

    cout << "Enter numbers:\n";
    for (int i = 0; i < N; i++) cin >> arr[i];

    vector<int> uniqueNumbers = removeDuplicates(arr);
    cout << "List without duplicates: ";
    for (int num : uniqueNumbers) cout << num << " ";

    return 0;
}
