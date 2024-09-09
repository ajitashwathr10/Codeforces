#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	vector<int> l = {a, b, c};
	sort(l.begin(), l.end());
	int d1 = abs(l[1] - a);
	int d2 = abs(l[1] - b);
	int d3 = abs(l[1] - c);
	cout << d1 + d2 + d3 << endl;
	return 0;
}
	