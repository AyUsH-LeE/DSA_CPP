#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N - i; j++)
            cout << " ";

        for (int j = 1; j <= i; j++) {
            if (i % 2 == 0)
                cout << j << " ";
            else
                cout << "* ";
        }

        cout << endl;
    }

    return 0;
}
