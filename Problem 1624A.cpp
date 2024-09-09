#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	while(n--) {
		int n;
		cin >> n;
		int arr[n];
		for(int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		int MAX = INT_MIN;
		int MIN = INT_MAX;
		for(int i = 0; i < n; i++) {
			MIN = min(MIN, arr[i]);
			MAX = max(MAX, arr[i]);
		}
		cout << MAX - MIN << endl;
	}
	return 0;
}