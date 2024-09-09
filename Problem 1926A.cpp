#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int t, a = 0, b = 0;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		for(int i = 0; i < s.size(); i++) {
			a += (s[i] == 'A');
			b += (s[i] == 'B');
		}
		if(a > b) cout << 'A' << endl;
		else cout << 'B' << endl;	
	}
	return 0;
}