#include <iostream>
using namespace std;

int main() {
    int N, num = 1;
    cout << "Enter N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++)
            cout << num++ << " ";
        cout << endl;
    }

    return 0;
}
