#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long long n, f;
	cin >> n;
	if(n % 2 == 0) {
		f = n / 2;
	} else {
		f = -(n + 1)/2;
	}
	cout << f << endl;
	return 0;
}
//f(n) = -1 + 2 - 3 + 4 ... (-1)^