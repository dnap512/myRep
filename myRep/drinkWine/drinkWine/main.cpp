#include <iostream>
#include <algorithm>
using namespace std;

static int memo[10001][3];
static int wine[10001];


int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> wine[i];
	}

	for (int i = 1; i <= n; i++) {
		memo[i][0] = max(memo[i - 1][0], memo[i - 1][1]);
		memo[i][0] = max(memo[i][0], memo[i - 1][2]);
		memo[i][1] = memo[i - 1][0] + wine[i];
		memo[i][2] = memo[i - 1][1] + wine[i];
		
	}
	int m = max(memo[n][0], memo[n][1]);
	m = max(m,memo[n][2]);


	cout << m << endl;
	return 0;
}