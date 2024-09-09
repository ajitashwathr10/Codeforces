#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {
	int num, aa = 0, dd = 0;
	cin >> num;
	string s;
	cin >> s;
	for(int i = 0; i < num; ++i) {
		if(s[i] == 'A') {
			aa++;
		} else {
			dd++;
		}
	}
	if(aa > dd) {
		cout << "Anton" << endl;
	} else if(aa < dd) {
		cout << "Danik" << endl;
	} else {
		cout << "Friendship" << endl;
	}
	return 0;
}
		