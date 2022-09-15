// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

#define N 3

// Function to multiply two matrices
void multiply(int a[][N], int b[][N], int res[][N])
{
	int mul[N][N];

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			mul[i][j] = 0;
			for (int k = 0; k < N; k++)
				mul[i][j] += a[i][k] * b[k][j];
		
		}
	}

	// Storing the multiplication result in res[][]
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			res[i][j] = mul[i][j];
}

// Function to compute G raised to the power n
void power(int G[N][N], int res[N][N], int n)
{

	// Base condition
	if (n == 1) {
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				res[i][j] = G[i][j];
		return;
	}

	// Recursion call for first half
	power(G, res, n / 2);

	// Multiply two halves
	multiply(res, res, res);

	// If n is odd
	if (n % 2 != 0)
		multiply(res, G, res);
}

// Driver code
int main()
{
	int G[N][N] = { 
					{ 1, 1, 1 },
					{ 0, 0, 1 },
					{ 0, 1, 0 } 
				  };

	int k = 2, res[N][N];

	// power(G, res, k);

	multiply(G, G, res);
	// print res ... 2 lenth path matrix
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			cout << res[i][j] << " ";
		cout << "\n";
	}

	multiply(res, G , res);
	// print res ... 4 lenth path matrix
	multiply(res, G, res);
	// print res ... 3 lenth path matrix


	return 0;
}

