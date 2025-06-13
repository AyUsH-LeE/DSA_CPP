#include <iostream>
using namespace std;

int main() {
    int N, num;
    cout << "Enter number of elements: ";
    cin >> N;

    cout << "Enter numbers: ";
    for (int i = 0; i < N; i++) {
        cin >> num;
        if (num > 0 && num % 2 == 0)
            cout << num << " ";
    }

    return 0;
}
