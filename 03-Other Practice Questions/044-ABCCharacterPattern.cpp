#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
            cout << ch;
        cout << endl;
    }

    return 0;
}
