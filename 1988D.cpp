#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int n;
ll a[300005], f[300005][24], smn[30];
vector<int> g[300005];

void dfs(int x, int fa) {
	for (int i = 1; i <= 22; i++) f[x][i] = i * a[x];
	for (int y : g[x]) {
		if (y == fa) continue;
		dfs(y, x);
		ll tt = 8e18;
		smn[23] = 8e18;
		for (int i = 22; i >= 1; i--) {
			smn[i] = min(smn[i + 1], f[y][i]);
		}
		for (int i = 1; i <= 22; i++) {
			f[x][i] += min(tt, smn[i + 1]);
			tt = min(tt, f[y][i]);
		}
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 1; i <= n; i++) cin >> a[i];
		for (int i = 1, x, y; i < n; i++) {
		cin >> x >> y;
		g[x].push_back(y), g[y].push_back(x);
		}
		dfs(1, 0);
		cout << *min_element(f[1] + 1, f[1] + 23) << '\n';
		for (int i = 1; i <= n; i++) {
			g[i].clear();
			memset(f[i], 0, sizeof(f[i]));
		}
	}
}
