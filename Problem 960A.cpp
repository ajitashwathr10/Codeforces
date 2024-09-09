#include <bits/stdc++.h>
using namespace std;

typedef long long lld;

lld powm(lld base, lld exp, lld mod = 1000000007) {
    lld ans = 1;
    while (exp) {
        if (exp & 1) ans = (ans * base) % mod;
        exp >>= 1, base = (base * base) % mod;
    }
    return ans;
}

lld ctl(char x, char an = 'a') {
    return (lld)(x - an);
}

char ltc(lld x, char an = 'a') {
    return (char)(x + an);
}

int main() {
    string s;
    map<char, lld> m;
    cin >> s;
    lld k = s.size();
    string tmp = "";
    tmp += s[0];
    for (lld i = 1; i < k; i++) {
        if (s[i] != s[i - 1]) tmp += s[i];
    }
    for (lld i = 0; i < k; i++) {
        m[s[i]]++;
    }
    if (tmp != "abc") {
        cout << "NO" << endl;
        return 0;
    }
    if (m['c'] != m['a'] && m['c'] != m['b']) {
        cout << "NO" << endl;
        return 0;
    }
    if (m['a'] >= 1 && m['b'] >= 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
