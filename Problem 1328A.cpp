#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long a, b;
		cin >> a >> b;
		int div = 0, p = 0;
		if(a % b == 0) {
			cout << 0 << endl;
			continue;
		}
		div = a / b;
		p = (div + 1) * b;
		cout << p - a << endl;
	}
	return 0;
}