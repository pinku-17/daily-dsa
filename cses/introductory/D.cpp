// https://cses.fi/problemset/task/1094 (Increasing Array)

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	int n;
	cin >> n;

	int arr[n];

	for(int i = 0; i < n; ++i)
		cin >> arr[i];

	long long req = 0;

	for(int i = 1; i < n; ++i) {
		int cur = max(0, arr[i - 1] - arr[i]);
		req += cur;
		arr[i] += cur;
	}

	cout << req;
}