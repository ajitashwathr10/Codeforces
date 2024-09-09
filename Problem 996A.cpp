#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> d = {100, 20, 10, 5, 1};
	int n, count = 0;
	cin >> n;
	for(int i = 0; i < d.size(); i++) {
		count += (n / d[i]);
		n %= d[i];
	}
	cout << count << endl;
	return 0;
}
