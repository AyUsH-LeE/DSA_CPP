#include <iostream>
using namespace std;

int sumMainDiagonal(int matrix[][100], int N) {
    int sum = 0;
    for (int i = 0; i < N; i++)
        sum += matrix[i][i];
    return sum;
}

int main() {
    int N;
    cout << "Enter matrix size (N): ";
    cin >> N;
    int matrix[100][100]; // Assuming a maximum size of 100x100

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> matrix[i][j];

    cout << "Sum of main diagonal: " << sumMainDiagonal(matrix, N) << endl;
    return 0;
}
