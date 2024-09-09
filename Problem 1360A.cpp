#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	while(n--) {
		int a, b;
		cin >> a >> b;
		if(a > b) {
			swap(a, b);
		}
		cout << max(a * 2, b) * max(a * 2, b) << endl;
	}
	return 0;
}