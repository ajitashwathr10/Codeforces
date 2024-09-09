#include <iostream>
using namespace std;

int main() {
	string s1, s2;
	cin >> s1;
	for(int i = 0; i < s1.length(); i++) {
		if(s1[i] == '.') {
			s2 += '0';
		}
		if(s1[i] == '-' && s1[i + 1] == '.') {
			s2 += '1';
			++i;
		}
		if(s1[i] == '-' && s1[i + 1] == '-') {
			s2 += '2';
			++i;
		}
	}
	cout << s2 << endl;
	return 0;
}