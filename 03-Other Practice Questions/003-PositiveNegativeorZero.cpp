#include <iostream>
using namespace std;

int main() {
    int arr[] = {-5, 0, 7, -3, 2}; // Example list
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " is ";
        if (arr[i] > 0)
            cout << "Positive\n";
        else if (arr[i] < 0)
            cout << "Negative\n";
        else
            cout << "Zero\n";
    }
    return 0;
}
