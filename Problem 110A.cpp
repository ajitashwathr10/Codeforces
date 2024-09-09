#include <iostream>
using namespace std;

int main() {
	long long num;
	int count = 0 ;
	cin >> num;
	while(num != 0) {
		if(num % 10 == 4 || num % 10 == 7) {
			count++;
		}
		num = num / 10;
	}
	if(count == 4 || count == 7) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	return 0;
}
			
	