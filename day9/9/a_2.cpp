// C++ Program to convert a given
// upper triangular matrix to 1D array

#include <iostream>
using namespace std;

// Create a class of Upper
// Triangular Matrix
class UTMatrix {

private:
	// Size of Matrix
	int n;

	// Pointer
	int* A;

	// Stores count of
	// non-zero elements
	int tot;

public:
	// Constructor
	UTMatrix(int N)
	{
		this->n = N;
		tot = N * (N + 1) / 2;
		A = new int[N * (N + 1) / 2];
	}

	// Destructor
	~UTMatrix() { delete[] A; }

	// Function to display array
	void Display(bool row = true);

	// Function to generate array in
	// Row - Major order
	void setRowMajor(int i, int j, int x);

	// Function to generate array in
	// Column - Major order
	void setColMajor(int i, int j, int x);

	// Function to return size of array
	int getN() { return n; }
};

// Function to generate array from given matrix
// by storing elements in column major order
void UTMatrix::setColMajor(int i, int j, int x)
{
	if (i <= j) {
		int index = ((j * (j - 1)) / 2) + i - 1;
		A[index] = x;
	}
}

// Function to generate array from given matrix
// by storing elements in row major order
void UTMatrix::setRowMajor(int i, int j, int x)
{
	if (i <= j) {
		int index
			= (n * (i - 1) - (((i - 2) * (i - 1)) / 2))
			+ (j - i);
		A[index] = x;
	}
}

// Function to display array elements
void UTMatrix::Display(bool row)
{
	for (int i = 0; i < tot; i++) {
		cout << A[i] << " ";
	}
	cout << endl;
}

// Function to generate and
// display array in Row-Major Order
void displayRowMajor(int N)
{
	UTMatrix rm(N);

	// Generate array in
	// row-major form
	rm.setRowMajor(1, 1, 1);
	rm.setRowMajor(1, 2, 2);
	rm.setRowMajor(1, 3, 3);
	rm.setRowMajor(1, 4, 4);
	rm.setRowMajor(2, 2, 5);
	rm.setRowMajor(2, 3, 6);
	rm.setRowMajor(2, 4, 7);
	rm.setRowMajor(3, 3, 8);
	rm.setRowMajor(3, 4, 9);
	rm.setRowMajor(4, 4, 10);

	// Display array elements in
	// row-major order
	cout << "Row-Wise: ";

	rm.Display();
}

// Function to generate and display
// array in Column-Major Order
void displayColMajor(int N)
{
	UTMatrix cm(N);

	// Generate array in
	// column-major form
	cm.setColMajor(1, 1, 1);
	cm.setColMajor(1, 2, 2);
	cm.setColMajor(1, 3, 3);
	cm.setColMajor(1, 4, 4);
	cm.setColMajor(2, 2, 5);
	cm.setColMajor(2, 3, 6);
	cm.setColMajor(2, 4, 7);
	cm.setColMajor(3, 3, 8);
	cm.setColMajor(3, 4, 9);
	cm.setColMajor(4, 4, 10);

	// Display array elements in
	// column-major form
	cout << "Column-wise: ";
	cm.Display(false);
}

// Driver Code
int main()
{
	// Size of row or column
	// of square matrix
	int N = 4;

	displayRowMajor(N);

	displayColMajor(N);

	return 0;
}
