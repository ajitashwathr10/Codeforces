#include <bits/stdc++.h>
using namespace std;

const int N = 100;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for(int i = 0; i < n; i++) {
			cin >> a[i];
		}
		vector<int> b(n, 1);
		vector<vector<int>> inds(N + 1);
		for(int i = 0; i < n; i++) {
			inds[a[i]].push_back(i);
		}
		int k = 2;
		for(int x = 1; x <= N; x++) {
			if((int) inds[x].size() >= 2) {
				b[inds[x][0]] = k;
				k++;
				if(k > 3) break;
			}
		}
		if(k <= 3) {
			cout << "-1\n";
		} else {
			for(int i = 0; i < n; i++) {
				cout << b[i] << " ";
			}
			cout << '\n';
		}
	}
	return 0;
}