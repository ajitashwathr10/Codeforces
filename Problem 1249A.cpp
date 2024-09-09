#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		int count = a + b + c + d;
		int ma = max(a, max(b, c));
		if(count % 3 == 0 && count / 3 >= ma) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}