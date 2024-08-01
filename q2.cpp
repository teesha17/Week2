#include <bits/stdc++.h>

using namespace std;

// Function to print a matrix
void printMatrix(const vector<vector<int>>& matrix) {
	for (const auto& row : matrix) {
    	for (int elem : row) {
        	cout << elem << " ";
    	}
    	cout << endl;
	}
}

// Function to calculate the transpose of a matrix
vector<vector<int>> transposeMatrix(const vector<vector<int>>& matrix) {
	if (matrix.empty()) return {};

	size_t rows = matrix.size();
	size_t cols = matrix[0].size();

	vector<vector<int>> transposed(cols, vector<int>(rows));

	for (size_t i = 0; i < rows; ++i) {
    	for (size_t j = 0; j < cols; ++j) {
        	transposed[j][i] = matrix[i][j];
    	}
	}

	return transposed;
}

int main() {
	size_t rows, cols;

	// Input the number of rows and columns
	cout << "Enter the number of rows: ";
	cin >> rows;
	cout << "Enter the number of columns: ";
	cin >> cols;

	// Create a matrix with the given dimensions
	vector<vector<int>> matrix(rows, vector<int>(cols));

	// Input the matrix elements
	cout << "Enter the elements of the matrix:" << endl;
	for (size_t i = 0; i < rows; ++i) {
    	for (size_t j = 0; j < cols; ++j) {
        	cout << "Element at (" << i << "," << j << "): ";
        	cin >> matrix[i][j];
    	}
	}

	// Calculate the transpose of the matrix
	vector<vector<int>> transposed = transposeMatrix(matrix);

	// Output the original matrix
	cout << "Original matrix:" << endl;
	printMatrix(matrix);

	// Output the transposed matrix
	cout << "Transposed matrix:" << endl;
	printMatrix(transposed);

	return 0;
}

