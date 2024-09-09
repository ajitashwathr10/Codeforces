#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	while(n--) {
		int a, b, c;
		cin >> a >> b >> c;
		if(a < b && b < c) {
			cout << "STAIR" << endl;
		} else if(a < b && b > c) {
			cout << "PEAK" << endl;
		} else {
			cout << "NONE" << endl;
		}
	} 
	return 0;
}