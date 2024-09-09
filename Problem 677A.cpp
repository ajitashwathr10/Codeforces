#include <iostream>
using namespace std;

int main() {
	int n, h, t = 0;
	cin >> n >> h;
	int a[n];
	for(int i = 0; i < n; i++) {
		cin >> a[i];
		t += (a[i] > h) ? 2 : 1;
	}
	cout << t << endl;
	return 0;
}