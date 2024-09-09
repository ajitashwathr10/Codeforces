#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool translation(string first, string last) {
	if(first.length() != last.length()) {
		return false;
	}
	for(int i = 0; i < first.length(); i++) {
		if(first[i] != last[first.length() - 1 - i]) {
			return false;
		}
	}
	return true;
}

int main() {
	string first, last, comp;
	cin >> first >> last;
	if(translation(first, last) {
		cout << "YES" << endl;
	} else {
		cout << "NO" < endl;
	}
	return 0;
}

