#include <iostream>
using namespace std;

void transposeMatrix(int matrix[][100], int N, int M) {
    for (int j = 0; j < M; j++) {
        for (int i = 0; i < N; i++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int N, M;
    cout << "Enter matrix dimensions (N M): ";
    cin >> N >> M;
    int matrix[100][100]; // Assuming a maximum size of 100x100

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> matrix[i][j];

    cout << "Transpose of the matrix:\n";
    transposeMatrix(matrix, N, M);
    return 0;
}
