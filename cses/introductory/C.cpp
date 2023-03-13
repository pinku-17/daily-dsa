// https://cses.fi/problemset/task/1069 (Repetitions)

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	string s;
	cin >> s;

	int n = s.size();

	char prev = s[0];
	int cur = 1, best = 1;

	for(int i = 1; i < n; ++i) {
		if(s[i] == prev)
			++cur;
		else
			best = max(best, cur), cur = 1, prev = s[i];
	}

	cout << max(best, cur);
}