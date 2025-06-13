#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter board size: ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << ((i + j) % 2 == 0 ? "B " : "W ");
        cout << endl;
    }

    return 0;
}
