#include <iostream>
#include <vector>
using namespace std;

bool startsWithVowel(string name) {
    char first = tolower(name[0]);
    return first == 'a' || first == 'e' || first == 'i' || first == 'o' || first == 'u';
}

vector<string> filterNamesWithVowel(const vector<string>& names) {
    vector<string> result;
    for (const string& name : names)
        if (startsWithVowel(name)) result.push_back(name);
    return result;
}

int main() {
    int N;
    cout << "Enter number of names: ";
    cin >> N;
    vector<string> names(N);

    cout << "Enter names:\n";
    for (int i = 0; i < N; i++) cin >> names[i];

    vector<string> filteredNames = filterNamesWithVowel(names);
    
    cout << "Names starting with a vowel:\n";
    for (const string& name : filteredNames) cout << name << " ";
    
    return 0;
}
