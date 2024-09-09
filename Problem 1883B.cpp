#include <bits/stdc++.h>
using namespace std;

int main() {
	long t;
	cin >> t;
	while(t--) {
		long n, k;
		cin >> n >> k;
		string s;
		cin >> s;
		int v[B] = {0};
		for(long i = 0; i < s.size(); i++) {
			++v[s[i] - 'a'];
		}
		long count = 0;
		for(long i = 0; i < 26; i++) {
			count += v[i] % 2;
		}
		cout << (count <= k + 1 ? "YES" : "NO") << endl;
	}
}
