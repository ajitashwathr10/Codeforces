#include <iostream>
#include <map>
using namespace std;

int main() {
	int n, count = 0;
	cin >> n;
	map<string, int> sh;
	sh["Tetrahedron"] = 4;
	sh["Cube"] = 6;
	sh["Octahedron"] = 8;
	sh["Dodecahedron"] = 12;
	sh["Icosahedron"] = 20;
	for(int i = 0; i < n; i++) {
		string s;
		cin >> s;
		count += sh[s];
	}
	cout << count << endl;
	return 0;
}