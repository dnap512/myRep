#include <iostream>
using namespace std;

static int m[101][10];
static long long mod = 1000000000LL;

int main() {
	int n;
	long long answer = 0;
	cin >> n;
	for (int i = 1; i <= 9; i++) {
		m[1][i] = 1;
	}
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= 9; j++) {
			switch (j) {
				case 0:
					m[i][j] = m[i - 1][j + 1];
					break;
				case 9:
					m[i][j] = m[i - 1][j - 1];
					break;
				default:
					m[i][j] = (m[i - 1][j - 1] + m[i - 1][j + 1])%mod;
			}
		}
	}
	
	for (int i = 0; i < 10; i++) {
		answer += m[n][i];
	}
	cout << answer % mod << endl;

	return 0;
}