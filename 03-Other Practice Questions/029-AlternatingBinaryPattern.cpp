#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            cout << ((i % 2 == 0) ? (j % 2 == 0 ? "1" : "0") : (j % 2 == 0 ? "0" : "1"));
        }
        cout << endl;
    }

    return 0;
}
