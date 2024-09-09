#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	string a, b, c, s;
	cin >> a >> b >> c >> s;
	s = a + b;
	sort(s.begin(), s.end());
	sort(c.begin(), c.end());
	
	if(s == c) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << enndl;
	}
	return 0;
}