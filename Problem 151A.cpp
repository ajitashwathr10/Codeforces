#include <iostream>
using namespace std;

int main() {
	int n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	cout << min(p / (n * np), min((k * l) / (n * nl), (c * d)/n)) << endl;
	return 0;
}