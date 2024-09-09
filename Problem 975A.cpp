#include <bits/stdc++.h>
#define all(p) p.begin(),p.end()
using namespace std;

int main() {
	int t;
	cin >> t;
	map<string,int> mp;
	for(int i = 0 ; i < t; i++) {
		string s;
		cin >> s;
		sort(all(s));
		auto ip = unique(all(s));
		s.resize(distance(s.begin(),ip));
		mp[s]++;
		
	}
	cout << (int)mp.size() << endl;
    return 0;
}