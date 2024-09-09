#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int lucky(int idx, string s) {
	int count = 0;
	for(int i = idx; i < 3 + idx; i++) {
		count += (int)s[i] - '0';
	}
	return count;
}

int main() {
	int n;
	cin >> n;
	while(n--) {
		string s;
		cin >> s;
		if(lucky(0, s) == lucky(3, s)) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}
		