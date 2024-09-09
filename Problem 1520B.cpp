#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, count = 0;
		cin >> n;
		for(int i = 1; i <= n; count++) {
			i = i / (i % 10) * (i % 10 + 1);
			if(i % 10 == 0) {
				i++;
			}
		}
		cout << count << endl;
	}
	return 0;
}