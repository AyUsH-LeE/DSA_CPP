#include <iostream>
using namespace std;

char calculateGrade(float avg) {
    if (avg >= 90) return 'A';
    else if (avg >= 80) return 'B';
    else if (avg >= 70) return 'C';
    else if (avg >= 60) return 'D';
    else return 'F';
}

int main() {
    int N;
    cout << "Enter number of subjects: ";
    cin >> N;
    float marks[N], sum = 0;

    cout << "Enter marks:\n";
    for (int i = 0; i < N; i++) {
        cin >> marks[i];
        sum += marks[i];
    }

    float avg = sum / N;
    cout << "Average Marks: " << avg << "\nGrade: " << calculateGrade(avg) << endl;
    return 0;
}
