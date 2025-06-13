#include <iostream>
using namespace std;

int main() {
    int count = 0;
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 9 != 0)
            count++;
    }
    cout << "Count: " << count << endl;
    return 0;
}
