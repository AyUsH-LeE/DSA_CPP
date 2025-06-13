#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0, temp;
    cout << "Enter a number: ";
    cin >> num;
    temp = num;

    while (temp > 0) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }

    cout << num << (num == reversed ? " is a Palindrome.\n" : " is NOT a Palindrome.\n");
    return 0;
}
