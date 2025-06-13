#include <iostream>
using namespace std;

void maxElementInEachRow(int matrix[][100], int N, int M) {
    for (int i = 0; i < N; i++) {
        int maxNum = matrix[i][0];
        for (int j = 1; j < M; j++)
            if (matrix[i][j] > maxNum) maxNum = matrix[i][j];
        cout << "Row " << i + 1 << ": " << maxNum << endl;
    }
}

int main() {
    int N, M;
    cout << "Enter matrix dimensions (N M): ";
    cin >> N >> M;
    int matrix[100][100];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> matrix[i][j];

    maxElementInEachRow(matrix, N, M);
    return 0;
}
