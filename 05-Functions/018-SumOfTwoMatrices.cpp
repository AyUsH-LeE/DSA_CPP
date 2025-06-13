#include <iostream>
using namespace std;

void sumMatrices(int matrix1[][100], int matrix2[][100], int N, int M) {
    int sum[100][100];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            sum[i][j] = matrix1[i][j] + matrix2[i][j];

    cout << "Sum of matrices:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++)
            cout << sum[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int N, M;
    cout << "Enter matrix dimensions (N M): ";
    cin >> N >> M;
    int matrix1[100][100], matrix2[100][100];

    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> matrix1[i][j];

    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> matrix2[i][j];

    sumMatrices(matrix1, matrix2, N, M);
    return 0;
}
