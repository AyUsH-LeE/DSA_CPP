#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter matrix size (N): ";
    cin >> N;
    
    int matrix[N][N];
    cout << "Enter matrix elements:\n";
    
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> matrix[i][j];

    cout << "Main Diagonal Elements:\n";
    for (int i = 0; i < N; i++)
        cout << matrix[i][i] << " ";

    return 0;
}
