#include <iostream>
using namespace std;

static int P[10001];
static int m[1001];

int cards(int n) {
	if (m[n] > 0) {
		return m[n];
	}
	int max = 0;
	for (int i = 1; i <= n; i++) {
		int temp = P[i] + cards(n-i);
		if (temp > max) {
			max = temp;
		}
	}
	m[n] = max;
	return m[n];
}

int main() {
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> P[i];
	}
	cout << cards(n) << endl;

	return 0;
}