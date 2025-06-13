#include <iostream>
using namespace std;

pair<int, int> countVowelsConsonants(const string& str) {
    int vowels = 0, consonants = 0;
    string vowelSet = "AEIOUaeiou";

    for (char ch : str)
        if (isalpha(ch))
            (vowelSet.find(ch) != string::npos) ? vowels++ : consonants++;

    return {vowels, consonants};
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    pair<int, int> counts = countVowelsConsonants(str);
    cout << "Vowels: " << counts.first << ", Consonants: " << counts.second << endl;
    return 0;
}
