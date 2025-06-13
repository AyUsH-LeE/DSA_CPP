#include <iostream>
using namespace std;

bool isPalindrome(const string& str) {
    int left = 0, right = str.length() - 1;
    while (left < right)
        if (tolower(str[left++]) != tolower(str[right--])) return false;
    return true;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << (isPalindrome(str) ? "Palindrome" : "Not a Palindrome") << endl;
    return 0;
}
