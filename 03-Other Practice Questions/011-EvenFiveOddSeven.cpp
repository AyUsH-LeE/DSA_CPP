#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0 && i % 5 == 0)
            cout << "EvenFive\n";
        else if (i % 2 != 0 && i % 7 == 0)
            cout << "OddSeven\n";
        else
            cout << i << "\n";
    }
    return 0;
}
