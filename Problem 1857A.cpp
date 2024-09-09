#include <iostream>
using namespace std; 

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, count = 0;
		cin >> n;
		int arr[n];
		for(int i = 0; i < n; i++) {
			cin >> arr[i];
			count += arr[i];
		}
		if(count % 2 == 0) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}
