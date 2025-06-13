#include <iostream>
using namespace std;

int main() {
    int N, M, pos = 0, neg = 0, zero = 0;
    cout << "Enter matrix size (N M): ";
    cin >> N >> M;

    int matrix[N][M];
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] > 0)
                pos++;
            else if (matrix[i][j] < 0)
                neg++;
            else
                zero++;
        }

    cout << "Positive: " << pos << "\nNegative: " << neg << "\nZero: " << zero << endl;

    return 0;
}
