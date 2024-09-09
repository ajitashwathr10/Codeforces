#include <bits/stdc++.h>
using namespace std;

int arr[100005];

int main() {
	int n, A, B, count = 0, total = 0;
	cin >> n >> A >> B;
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
		total += arr[i];
	}
	int f = arr[0];
	sort(arr + 1, arr + n);
	for(int i = n - 1; i > 0; i--) {
		if(f * A / total >= B) {
			break;
		} 
		total -= arr[i];
		count++;
	}
	cout << count << endl;
	return 0;
}