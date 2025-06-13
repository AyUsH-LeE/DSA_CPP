#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string sentence;
    int wordCount = 0;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    stringstream ss(sentence);
    string word;
    while (ss >> word) wordCount++;

    cout << "Word count: " << wordCount << endl;
    return 0;
}
