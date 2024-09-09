#include <bits/stdc++.h>
#include <iostream>
#define ll long long int
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		ll x, y, n;
		cin >> x >> y >> n;

		if (n - n % x + y <= n) {
			cout << n - n % x + y << endl;
		} else {
			cout << n - n % x - (x - y) << endl;
		}
	}
	return 0;
}

