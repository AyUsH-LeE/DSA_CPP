#include <iostream>
#include <cctype>
using namespace std;

bool isVowel(char ch) {
    char vowels[] = "AEIOUaeiou";
    for (char v : vowels)
        if (ch == v) return true;
    return false;
}

int main() {
    string str;
    int vowels = 0, consonants = 0;
    cout << "Enter a string: ";
    getline(cin, str);

    for (char ch : str) {
        if (isalpha(ch)) {
            if (isVowel(ch))
                vowels++;
            else
                consonants++;
        }
    }

    cout << "Vowels: " << vowels << "\nConsonants: " << consonants << endl;
    return 0;
}
