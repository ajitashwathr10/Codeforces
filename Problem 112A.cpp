#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	string a,b;
	cin >> a >> b;
	transform(a.begin(), a.end(), a.begin(), ::tolower);
	transform(b.begin(), b.end(), b.begin(), ::tolower);
	cout << strcmp(a.c_str(), b.c_str()) << endl;
	return 0;
}

		
