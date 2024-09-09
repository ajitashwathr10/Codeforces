#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	vector<int> l(4);
	cin >> l[0] >> l[1] >> l[2] >> l[3];
	sort(l.begin(), l.end());
	l.erase(unique(l.begin(), l.end()), l.end());
	cout << 4 - l.size() << endl;
	return 0;
}
