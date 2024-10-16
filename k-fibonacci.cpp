
#include <bits/stdc++.h>
using namespace std;

// Function that finds the Nth
// element of K-Fibonacci series
void solve(int N, int K)
{
	vector<long long int> Array(N + 1, 0);

	// If N is less than K
	// then the element is '1'
	if (N <= K) {
		cout << "1" << endl;
		return;
	}

	long long int i = 0, sum = K;

	// first k elements are 1
	for (i = 1; i <= K; ++i) {
		Array[i] = 1;
	}

	// (K+1)th element is K
	Array[i] = sum;

	// find the elements of the
	// K-Fibonacci series
	for (int i = K + 2; i <= N; ++i) {

		// subtract the element at index i-k-1
		// and add the element at index i-i
		// from the sum (sum contains the sum
		// of previous 'K' elements )
		Array[i] = sum - Array[i - K - 1] + Array[i - 1];

		// set the new sum
		sum = Array[i];
	}
	cout << Array[N] << endl;
}

// Driver code
int main()
{
	long long int N = 4, K = 2;

	// get the Nth value
	// of K-Fibonacci series
	solve(N, K);

	return 0;
}
