#include "pch.h"
#include <iostream>
using namespace std;

static int memo[12];

int p123(int n) {
	if (memo[n] > 0) {
		return memo[n];
	}
	memo[n] = p123(n - 3) + p123(n - 2) + p123(n - 1);
	return memo[n];
}

int main()
{
	int test;
	int n;
	cin >> test;
	memo[0] = 1;
	memo[1] = 1;
	memo[2] = 2;
	while (test--) {
		cin >> n;

		cout << p123(n) <<  endl;
	}
}