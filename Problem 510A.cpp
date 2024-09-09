#include <iostream>
using namespace std;

int main() {
	int n, m;
	bool left = false, right = true;
	cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			if(i & 1) {
				cout << "#";
			} else {
				if(right == true) {
					if(j == m) {
						cout << "#";
						right = false;
						left = true;
					} else {
						cout << ".";
					}
				} else if(left == true) {
					if(j == 1) {
						cout << "#";
					} else {
						cout << ".";
						if(j == m) {
							left = false;
							right = true;
						}
					}
				}
			}
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}
					