// https://cses.fi/problemset/task/1068 (Weird Algorithm)

#include <bits/stdc++.h>
using namespace std;

#define int int64_t

signed main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	int n;
	cin >> n;

	while(n != 1) {
		cout << n << " ";
		n = (n & 1) ? 3 * n + 1 : n / 2;
	}

	cout << n;
}