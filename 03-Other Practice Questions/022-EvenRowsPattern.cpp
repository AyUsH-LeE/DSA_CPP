#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < i; j++)
                cout << "*";
            cout << endl;
        }
    }
    
    return 0;
}
