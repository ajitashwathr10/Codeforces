//a[i][j] takes position of element a[j][n - 1 - i]
// a[n - 1 - j][i] takes position of element a[i][j]
//a[n - 1 - i][n - 1 - j] takes position of element a[n - 1 - j][i]

#include <bits/stdc++.h>
#define all(arr) arr.begin(), arr.end()
using namespace std;

const int MAXN = 1010;
int n;
string A[MAXN];

int solve() {
    int ans = 0;
    for (int i = 0; i * 2 < n; ++i)
        for (int j = 0; j * 2 < n; ++j) {
            vector<char> M {A[i][j], A[n - 1 - j][i], A[n - 1 - i][n - 1 - j], A[j][n - 1 - i]};
            char c = *max_element(all(M));
            for(char e: M)
                ans += c - e;
        }
    return ans;
}

int main() {
    int t; cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; ++i)
            cin >> A[i];
        cout << solve() << endl;
    }
}