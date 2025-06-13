#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter odd N: ";
    cin >> N;

    int mid = N / 2 + 1;

    for (int i = 1; i <= N; i++) {
        int stars = (i <= mid) ? (2 * i - 1) : (2 * (N - i) + 1);
        int spaces = (N - stars) / 2;

        for (int j = 0; j < spaces; j++)
            cout << " ";
        for (int j = 0; j < stars; j++)
            cout << "*";
        cout << endl;
    }
    
    return 0;
}
