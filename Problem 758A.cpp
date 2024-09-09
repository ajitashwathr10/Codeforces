#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n];
	int max1 = 0;
	int count = 0;
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
		max1 = max(arr[i], max1);
	}
	for(int k = 0; k < n; k++) {
		count += max1 - arr[k];
	}
	cout << count << endl;
	return 0;
}