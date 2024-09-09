#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m, k;
		cin >> n >> m >> k;
		if(k > 3) {
			cout << 0 << endl;
		} else if (k == 3) {
			cout << max(0, (m - n + 1) - (m / n)) << endl;
		} else if (k == 2) {
			cout << max(0, (m / n - 1) + min(m, n)) << endl;
		} else if (k == 1) {
			cout << 1 << endl;
		}
	}
	return 0;
}