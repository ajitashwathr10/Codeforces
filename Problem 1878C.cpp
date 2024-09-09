#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k, z;
		cin >> n >> k >> z;
		if(2 * k >= x * (x + 1) && 2 * k <= n * (n + 1) - (n - x) * (n - x + 1)) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}