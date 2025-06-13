#include <iostream>
using namespace std;

int main() {
    int N, M;
    cout << "Enter matrix dimensions (N M): ";
    cin >> N >> M;
    int matrix[N][M];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> matrix[i][j];

    int maxSum = 0, rowIndex = 0;

    for (int i = 0; i < N; i++) {
        int rowSum = 0;
        for (int j = 0; j < M; j++)
            rowSum += matrix[i][j];

        if (rowSum > maxSum) {
            maxSum = rowSum;
            rowIndex = i;
        }
    }

    cout << "Row with max sum: " << rowIndex + 1 << " (Sum = " << maxSum << ")" << endl;
    return 0;
}
