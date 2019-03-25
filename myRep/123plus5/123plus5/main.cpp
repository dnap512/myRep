#include <iostream>
using namespace std;

static int memo[100001][6];



int p1235(int n, int m) {
	if (memo[n][m] > 0) {
		return memo[n][m];
	}
	switch (m) {
	case 1:
		memo[n][m] = p1235(n - 1, 2) + p1235(n - 1, 3);
		break;
	case 2:
		memo[n][m] = p1235(n - 2, 1) + p1235(n - 2, 3);
		break;
	case 3:
		memo[n][m] = p1235(n - 3, 1) + p1235(n - 3, 2);
	}
	return memo[n][m];
}

int p123(int n) {
	if (memo[n][0] > 0) {
		return memo[n][0];
	}
	memo[n][0] = p1235(n - 1, 2) + p1235(n - 1, 3) + p1235(n - 2, 1) + p1235(n - 2, 3) + p1235(n - 3, 1) + p1235(n - 3, 2);
	return memo[n][0];
}

int main()
{
	int test;
	int n;
	cin >> test;
	while (test--) {
		cin >> n;

		cout << p123(n) << endl;
	}
}