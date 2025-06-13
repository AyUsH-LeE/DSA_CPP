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
        sum += matrix[i][i];

    cout << "Sum of main diagonal: " << sum << endl;
    return 0;
}
