#include <iostream>
#include <cctype>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	for(int i = 0; i < b; ++i) {
		if(a % 10 == 0) {
			n /= 10;
		} else {
			n--;
		}
	}
	cout << n << endl;
	return 0;
}
