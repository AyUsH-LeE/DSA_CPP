#include <iostream>
using namespace std;

int main() {
    int N, M;
    cout << "Enter matrix dimensions (N M): ";
    cin >> N >> M;
    int matrix1[N][M], matrix2[N][M], sum[N][M];

    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> matrix1[i][j];

    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> matrix2[i][j];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            sum[i][j] = matrix1[i][j] + matrix2[i][j];

    cout << "Sum of matrices:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++)
            cout << sum[i][j] << " ";
        cout << endl;
    }

    return 0;
}
