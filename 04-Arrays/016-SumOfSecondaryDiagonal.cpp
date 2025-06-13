#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;
    cout << "Enter matrix size (N): ";
    cin >> N;
    int matrix[N][N];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> matrix[i][j];

    for (int i = 0; i < N; i++)
        sum += matrix[i][N - i - 1];

    cout << "Sum of secondary diagonal: " << sum << endl;
    return 0;
}
