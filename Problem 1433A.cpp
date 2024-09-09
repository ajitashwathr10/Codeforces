#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, x, len;
	cin >> n;
	while(n--) {
		cin >> x;
		len = to_string(x).length();
		cout << ((x % 10) - 1) * 10 + (len * (len + 1) / 2) << endl;
	}
	return 0;
}