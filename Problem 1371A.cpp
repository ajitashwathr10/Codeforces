#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, count = 0;
		cin >> n;
		count = n / 2;
		if(n % 2 == 0) {
			count++;
		}
		cout << count << endl;
	}
	return 0;
}
	