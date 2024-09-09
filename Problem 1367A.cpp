#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	while(n--) {
		string s;
		cin >> s;
		string s1 = s.substr(0, 2);
		for(int i = 3; i < s.size(); i += 2) {
			s1 += s[i];
		}
		cout << s1 << endl;
	}
	return 0;
}