#include <iostream>
using namespace std;

int main() {
	int n, c = 8;
	//Each integer no less than 12 can be expressed as the sum of two primes
	// n >= 12 (4 + 8)
	cin >> n;
	if(n & 1) {
		c++;
	}
	cout << c << " " << n - c << endl;
	return 0;
}
