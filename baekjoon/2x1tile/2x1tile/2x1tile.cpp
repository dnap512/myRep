#include <iostream>
#include "pch.h"
using namespace std;

static int memo[1001];

int tile(int n) {
	if (memo[n] > 0) {
		return memo[n] % 10007;
	}
	memo[n] = tile(n - 1) % 10007 + tile(n - 2) % 10007;
	return memo[n] % 10007;
	
}

int main()
{
	int n;
	cin >> n;
	memo[0] = 1;
	memo[1] = 1;
	memo[2] = 2;
	cout << tile(n) << endl;
	return 0;
}
