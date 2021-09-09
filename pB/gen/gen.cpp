#include <bits/stdc++.h>

#include "testlib.h"
#define endl '\n'
using namespace std;

const int _MAXN = 1000000000;  // 10^9

int main(int argc, char* argv[]) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	registerGen(argc, argv, 1);

	int taskN = atoi(argv[1]);

	int maxN = _MAXN;
	if (taskN == 1) {
		maxN = 87;
	}

	int X1 = rnd.next(-maxN, maxN);
	int Y1 = rnd.next(-maxN, maxN);
	int X2 = rnd.next(-maxN, maxN);
	int Y2 = rnd.next(-maxN, maxN);

	cout << X1 << " " << Y1 << endl;
	cout << X2 << " " << Y2 << endl;
}
