#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, r;
		cin >> n >> r;
		vector<int, int> v(n);
		for(int i = 0; i < n; i++) {
			cin >> v[i].first;
		}
		for(int i = 0; i < n; i++) {
			cin >> v[i].second;
		}
		sort(v.begin(), v.end());
		int rem(n-1), total(r);
		for(int i = 0; i < n; i++) {
			if(v[i].first >= r) 
				break;
			int count = (rem < v[i].second) ? rem : v[i].second;
			total += count * v[i].first;
			rem -= count;
		}
		total += r * rem;
		cout << total << endl;
	}
	return 0;
}