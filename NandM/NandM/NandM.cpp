#include "pch.h"
#include <iostream>
using namespace std;

static bool c[10];
static int list[10];

void NM(int index, int n, int m) {
	if (index == m+1) {
		for (int i = 1; i <= m; i++) {
			cout << list[i] << " ";
		} cout << endl;
	}
	for (int i = 1; i <= n; i++) {
		if (c[i]) continue;
		c[i] = true;
		list[index] = i;
		NM(index + 1, n, m);
		c[i] = false;
	}
}

int main(){
	int n, m;
	cin >> n >> m;

	NM(1, n, m);
}
