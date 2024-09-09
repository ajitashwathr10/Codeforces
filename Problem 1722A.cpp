#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a;
        string s;
        cin >> a;
        cin >> s;
        sort(s.begin(), s.end());
        if(s == "Timru") {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}