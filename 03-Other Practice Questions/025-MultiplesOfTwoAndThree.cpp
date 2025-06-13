#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0 && i % 3 == 0)
            cout << "Multiple of both\n";
        else if (i % 2 == 0)
            cout << "Multiple of 2\n";
        else if (i % 3 == 0)
            cout << "Multiple of 3\n";
        else
            cout << i << "\n";
    }
    return 0;
}
