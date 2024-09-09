#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	int x, y;
	cin >> a >> b >> c;
	x = c * (a + (c * a)) / 2;
	y = max(x - b, 0);
	cout << y << endl;
	return 0;
}
		