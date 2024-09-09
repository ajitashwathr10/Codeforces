#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, o = 0, e = 0;
		for(int i = 0; i < n * 2; i++) {
			int x;
			cin >> x;
			o += x & 1;
			e += !(x & 1);
		}
		cout << (o == e ? "YES" : "NO") << endl;
	}
	return 0;
}