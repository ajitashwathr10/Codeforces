#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, count = 0, ans = 0;
		cin >> n;
		int arr[n];
		for(int i = 0; i < n; i++) {
			cin >> arr[i];
			if(a[i] == 0) {
				count++;
			} else {
				ans = max(ans, count);
				count = 0;
			}
		}
		cout << max(ans, count) << endl;	
	}
	return 0;
}
			