#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int t, count = 1, max = 1;
	cin >> t;
	int arr[t];
	for(int i = 0; i < t; i++) {
		cin >> arr[i];
	}
	for(int i = 1; i < t; i++) {
		if((arr[i] > arr[i - 1])) {
			count++;
		} else {
			if(count > max) 
				max = count;
			count = 1;
		}
	}
	if(count > max) {
		max = count;
	}
	cout << max << endl;
	return 0;
}