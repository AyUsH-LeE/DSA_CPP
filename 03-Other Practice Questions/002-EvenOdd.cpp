#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cout << i << (i % 2 == 0 ? " is Even\n" : " is Odd\n");
    }
    return 0;
}
