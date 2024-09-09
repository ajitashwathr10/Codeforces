#include <iostream>
using namespace std;

int main() {
	int k, r;
	cin >> k >> r;
	int v = 0, p = 0;
	while(true) {
		if((p % 10 == 0 && p != 0) || p % 10 == r) {
			break;
		}
		++v;
		p += k;
	}
	cout << v << endl;
	return 0;
}