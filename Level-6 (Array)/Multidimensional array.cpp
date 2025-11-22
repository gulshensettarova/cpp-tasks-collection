#include <iostream>
using namespace std;

// Massivin çap edilm?si
void printMatrix(int rows, int cols, int matrix[][3]) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}

// C?mini tapan metod
int sumMatrix(int rows, int cols, int matrix[][3]) {
    int total = 0;
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            total += matrix[i][j];
    return total;
}

// Maksimum elementi tapan metod
int maxMatrix(int rows, int cols, int matrix[][3]) {
    int maxVal = matrix[0][0];
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            if(matrix[i][j] > maxVal)
                maxVal = matrix[i][j];
    return maxVal;
}

// Iki s?tiri d?yis?n metod
void swapRows(int rows, int cols, int matrix[][3], int row1, int row2) {
    if(row1 < 0 || row1 >= rows || row2 < 0 || row2 >= rows) {
        cout << "Row index xetasi!" << endl;
        return;
    }
    for(int j = 0; j < cols; j++) {
        int temp = matrix[row1][j];
        matrix[row1][j] = matrix[row2][j];
        matrix[row2][j] = temp;
    }
}

// Iki sütunu d?yis?n metod
void swapCols(int rows, int cols, int matrix[][3], int col1, int col2) {
    if(col1 < 0 || col1 >= cols || col2 < 0 || col2 >= cols) {
        cout << "Column index xetasi!" << endl;
        return;
    }
    for(int i = 0; i < rows; i++) {
        int temp = matrix[i][col1];
        matrix[i][col1] = matrix[i][col2];
        matrix[i][col2] = temp;
    }
}


int main() {
    int staticMatrix[2][3] = { {1, 2, 3}, {4, 5, 6} };
    int rows = 2, cols = 3;

    cout << "Original matrix:\n";
    printMatrix(rows, cols, staticMatrix);

    cout << "Sum: " << sumMatrix(rows, cols, staticMatrix) << endl;
    cout << "Max: " << maxMatrix(rows, cols, staticMatrix) << endl;

    swapRows(rows, cols, staticMatrix, 0, 1);
    cout << "After swapping rows 0 and 1:\n";
    printMatrix(rows, cols, staticMatrix);

    swapCols(rows, cols, staticMatrix, 0, 2);
    cout << "After swapping columns 0 and 2:\n";
    printMatrix(rows, cols, staticMatrix);

    return 0;
}
