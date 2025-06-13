#include <iostream>
using namespace std;

bool isSymmetric(int matrix[][100], int N) {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (matrix[i][j] != matrix[j][i]) return false;
    return true;
}

int main() {
    int N;
    cout << "Enter matrix size (N): ";
    cin >> N;
    int matrix[100][100]; // Assuming max size

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> matrix[i][j];

    cout << (isSymmetric(matrix, N) ? "Matrix is symmetric" : "Matrix is NOT symmetric") << endl;
    return 0;
}
