#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	while(n--) {
		int t, idx, count = 0;
		string s;
		cin >> t >> s;
		bool a[26] = {0};
		for(int i = 0; i < s.size(); i++) {
			idx = s[i] - 'A';
			count += 2 - a[idx];
			a[idx] = 1;
		}
		cout << count << endl;
	}
	return 0;
}
			