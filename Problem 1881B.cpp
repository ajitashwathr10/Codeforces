#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int a, b, c;
		vector<int> v = {a, b, c};
		sort(v.begin(), v.end());
		if(v[0] == v[1] && v[1] == v[2]) {
			cout << "YES" << endl;
		} else if(v[1] % v[0] == 0 && v[2] % v[0] == 0 && (v[1] / v[0] - 1) + (v[2] / v[0] - 1) <= 3) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}
		