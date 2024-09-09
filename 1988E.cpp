#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pr;

int n, a[500005], st[500005], c[500005][2], top, sz[500005];
ll ans[500005], atv[500005], sum;
void dfs1(int x) {
	sz[x] = 1;
	for (int i = 0; i < 2; i++)
		if (c[x][i]) dfs1(c[x][i]), sz[x] += sz[c[x][i]];
	sum += (atv[x] = (sz[c[x][0]] + 1ll) * (sz[c[x][1]] + 1ll) * a[x]);
}
void dfs2(int x, ll dlt) {
	ll val = sum - dlt - atv[x];
	vector<int> lr, rl;
	vector<pr> ve;
	int y = c[x][0];
	while (y) lr.push_back(y), val -= atv[y], y = c[y][1];
	y = c[x][1];
	while (y) rl.push_back(y), val -= atv[y], y = c[y][0];
	{
		int i = 0, j = 0;
		while (i < lr.size() || j < rl.size()) {
			if (j >= rl.size() || (i < lr.size() && j < rl.size() && a[lr[i]] < a[rl[j]])) {
				ve.push_back(pr(lr[i], 0));
				i++;
			} else {
				ve.push_back(pr(rl[j], 1));
				j++;
			}
		}
	}
	int cursz = 0;
	for (int i = (int)ve.size() - 1; i >= 0; i--) {
		int p = ve[i].first, q = ve[i].second;
		// cout << "I:" << i << ' ' << cursz << '\n';
		val += (cursz + 1ll) * (sz[c[p][q]] + 1ll) * a[p];
		cursz += sz[c[p][q]] + 1;
	}
	ans[x] = val;
	for (int i = 0; i < 2; i++)
		if (c[x][i]) dfs2(c[x][i], dlt + 1ll * (sz[c[x][i ^ 1]] + 1) * a[x]);
}
void Solve() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	st[top = 0] = 0;
	for (int i = 1; i <= n; i++) {
		while (top && a[st[top]] > a[i]) top--;
		c[i][0] = c[st[top]][1], c[st[top]][1] = i;
		st[++top] = i;
	}
	int rt = st[1];
	sum = 0, dfs1(rt), dfs2(rt, 0);
	for (int i = 1; i <= n; i++) cout << ans[i] << ' ';
	cout << '\n';
	for (int i = 0; i <= n; i++) c[i][0] = c[i][1] = 0;
}
int main() {
	int t;
	scanf("%d", &t);
	while (t--) Solve();
}