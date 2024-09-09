#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> v;
    char prev = '1';
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
			v.push_back(1);
		}
        if (s[i] == '0' && prev == '1') {
			v.push_back(0);
		}
        prev = s[i];
    }
    int count0 = 0, count1 = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == 1) {
			count1++;
		} else {
			count0++;
		}
    }
    if (count0 >= count1) {
		cout << "NO" << endl;
	} else {
		cout << "YES" << endl;
	}
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
  