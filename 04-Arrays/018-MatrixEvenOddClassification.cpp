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

    cout << "Matrix with Even/Odd classification:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++)
            cout << matrix[i][j] << (matrix[i][j] % 2 == 0 ? " (Even) " : " (Odd) ");
        cout << endl;
    }

    return 0;
}
