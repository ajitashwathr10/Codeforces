#include <iostream>
#include <cctype>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

int main() {
	string s;
	cin >> s;
	int lower, upper;
	for(int i = 0; i < s.length(); ++i) {
		if(isupper(s[i])) {
			upper += 1;
		} else {
			lower += 1;
		}
	}
	if(upper > lower) {
		for(int j = 0; j < s.length(); ++j) {
			s[j] = toupper(s[j]);
		}
	} else {
		for(int k = 0; k < s.length(); ++k) {
			s[k] = tolower(s[k]);
		}
	}
	cout << s << endl;
	return 0;
}