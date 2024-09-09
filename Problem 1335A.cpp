#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	while(n--) {
		double t;
		cin >> t;
		long long res = ceil((t/2) - 1);
		cout << res << endl;
	}
	return 0;
}