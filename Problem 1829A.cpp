#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s, c = "codeforces";
    cin >> s;
    int ans = 0;
    for(int i = 0; i < 10; i++)
    {
        if(s[i] != c[i])
        {
            ans++;
        }
    }
    cout << ans << endl;
}

int32_t main(){
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
   