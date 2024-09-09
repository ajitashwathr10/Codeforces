#include <iostream>
using namespace std;

int main() {
    int t;
	cin >> t;
    while(t--){
        int n; 
		string s;
		cin >> n >> s;
        bool seen[26] = {0};
        bool res(true);
        for(int i = 0; i < s.size(); i++){
            if(i == 0 || s[i] != s[i - 1]){
                if(seen[s[i] - 'A']) {
					res = false; 
					break;
				} else {
					seen[s[i] - 'A'] = true;
				}
            }
        }
        cout << (res ? "YES" : "NO") << endl;
    }
	return 0;
}