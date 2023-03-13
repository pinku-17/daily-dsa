// https://cses.fi/problemset/task/1083 (Missing Number)

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	int n, num;
	cin >> n;

	int missing = 0;

	for(int i = 1; i <= n; ++i)
		missing ^= i;

	for(int i = 1; i < n; ++i) {
		cin >> num;
		missing ^= num;
	}

	cout << missing;
}