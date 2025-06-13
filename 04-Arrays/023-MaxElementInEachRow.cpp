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

    cout << "Largest element in each row:\n";
    for (int i = 0; i < N; i++) {
        int maxNum = matrix[i][0];
        for (int j = 1; j < M; j++)
            if (matrix[i][j] > maxNum) maxNum = matrix[i][j];
        cout << "Row " << i + 1 << ": " << maxNum << endl;
    }

    return 0;
}
