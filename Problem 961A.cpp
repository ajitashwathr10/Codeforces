#include <bits/stdc++.h>
using namespace std;

//n
//min count(i) - count(i) = No. of squares
//i = 1

int main() {
	int n, m, col;
	cin >> n >> m;
	vector<int> count(n);
	for(int i = 0; i < m; i++) {
		cin >> col;
		++count[col - 1];
	}
	cout << *min_element(count.begin(), count.end()) << endl;
	return 0;
}