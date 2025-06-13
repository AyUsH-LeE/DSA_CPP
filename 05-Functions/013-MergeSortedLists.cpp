#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> mergeSortedLists(const vector<int>& list1, const vector<int>& list2) {
    vector<int> merged = list1;
    merged.insert(merged.end(), list2.begin(), list2.end());
    sort(merged.begin(), merged.end());
    return merged;
}

int main() {
    int N1, N2;
    cout << "Enter size of first list: ";
    cin >> N1;
    vector<int> list1(N1);

    cout << "Enter elements for first list:\n";
    for (int i = 0; i < N1; i++) cin >> list1[i];

    cout << "Enter size of second list: ";
    cin >> N2;
    vector<int> list2(N2);

    cout << "Enter elements for second list:\n";
    for (int i = 0; i < N2; i++) cin >> list2[i];

    vector<int> sortedMerged = mergeSortedLists(list1, list2);
    cout << "Merged and sorted list:\n";
    for (int num : sortedMerged) cout << num << " ";

    return 0;
}
