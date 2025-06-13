#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    int reversed = 0, temp = num;
    while (temp > 0) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }
    return num == reversed;
}

int main() {
    for (int i = 1; i <= 1000; i++) {
        if (isPalindrome(i))
            cout << i << " ";
    }
    return 0;
}
