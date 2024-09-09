#include <iostream>
using namespace std;

int main() {
	int n;
	long long a, b, c, d;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> a >> b >> c >> d;
		cout << int((b > a) + (c > a) + (d > a)) << endl;
	}
	return 0;
}