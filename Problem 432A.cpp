#include <iostream>
using namespace std;

int main() {
	int max = 5, par = 3, count = 0;
	int n, k;
	cin >> n >> k; 
	for(int i = 0; i < n; i++) {
		int j;
		cin >> j;
		count += (j <= (max - k));
	}
	cout << count / par << endl;
	return 0;
}