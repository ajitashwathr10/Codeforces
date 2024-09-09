#include <bits/stdc++.h>
using namespace std;
const int mod = 998244353;
int Power(int x, int y) {
	int r = 1;
	while (y) {
		if (y & 1) r = 1ll * r * x % mod;
		x = 1ll * x * x % mod, y >>= 1;
	}
	return r;
}
namespace Conv_998244353 {

const int g = 3, invg = ((mod + 1) % 3 == 0 ? (mod + 1) / 3 : (2 * mod + 1) / 3);
int wk[1050005], ta[1050005], tb[1050005];
void DFT(int *a, int n) {
	for (int i = n >> 1; i; i >>= 1) {
		int w = Power(g, (mod - 1) / (i << 1));
		wk[0] = 1;
		for (int j = 1; j < i; j++) wk[j] = 1ll * wk[j - 1] * w % mod;
		for (int j = 0; j < n; j += (i << 1)) {
			for (int k = 0; k < i; k++) {
				int x = a[j + k], y = a[i + j + k], z = x;
				x += y, (x >= mod && (x -= mod)), a[j + k] = x;
				z -= y, (z < 0 && (z += mod)), a[i + j + k] = 1ll * z * wk[k] % mod;
			}
		}
	}
}
void IDFT(int *a, int n) {
	for (int i = 1; i < n; i <<= 1) {
		int w = Power(invg, (mod - 1) / (i << 1));
		wk[0] = 1;
		for (int j = 1; j < i; j++) wk[j] = 1ll * wk[j - 1] * w % mod;
		for (int j = 0; j < n; j += (i << 1)) {
			for (int k = 0; k < i; k++) {
				int x = a[j + k], y = 1ll * a[i + j + k] * wk[k] % mod, z = x;
				x += y, (x >= mod && (x -= mod)), a[j + k] = x;
				z -= y, (z < 0 && (z += mod)), a[i + j + k] = z;
			}
		}
	}
	for (int i = 0, inv = Power(n, mod - 2); i < n; i++) a[i] = 1ll * a[i] * inv % mod;
}
vector<int> conv(vector<int> A, vector<int> B) {
	for (auto &i : A) i %= mod;
	for (auto &i : B) i %= mod;
	int sa = A.size(), sb = B.size();
	vector<int> ret(sa + sb - 1);
	int len = 1;
	while (len < ret.size()) len <<= 1;
	for (int i = 0; i < len; i++) ta[i] = tb[i] = 0;
	for (int i = 0; i < sa; i++) ta[i] = A[i];
	for (int i = 0; i < sb; i++) tb[i] = B[i];
	DFT(ta, len), DFT(tb, len);
	for (int i = 0; i < len; i++) ta[i] = 1ll * ta[i] * tb[i] % mod;
	IDFT(ta, len);
	for (int i = 0; i < ret.size(); i++) ret[i] = ta[i];
	return ret;
}

} // namespace Conv_998244353
vector<int> conv(vector<int> A, vector<int> B) {
	return Conv_998244353::conv(A, B);
}
int n, a[705], b[705], c[705], f[705][705], u[705][705], v[705][705];
int ny[705], jc[705];
void upd(int &x, int y) { x += y, (x >= mod && (x -= mod)); }
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 1; i <= n; i++) cin >> b[i];
	for (int i = 0; i < n; i++) cin >> c[i];
	f[0][0] = jc[0] = ny[0] = 1;
	for (int i = 1; i <= n; i++) {
		jc[i] = 1ll * jc[i - 1] * i % mod, ny[i] = Power(jc[i], mod - 2);
	}
	vector<int> A(500000), B(500000);
	for (int i = 0; i <= n; i++) {
		for (int j = i; j >= 0; j--) {
			for (int k = i; k >= 0; k--) {
				if (!f[j][k]) continue;
				// cout << i << ' ' << j << ' ' << k << ' ' << f[j][k] << '\n';
				upd(u[i][k], 1ll * f[j][k] * a[j + 1] % mod);
				upd(v[i][k], 1ll * f[j][k] * b[j + 1] % mod);
				upd(f[j + 1][k + (i != 0)], f[j][k]);
				upd(f[j][k + 1], 1ll * f[j][k] * (i - (i != 0) - k) % mod);
				f[j][k] = 1ll * f[j][k] * (k + (i != 0)) % mod;
			}
		}
		if (i > 0) reverse(v[i], v[i] + i);
		for (int j = 0; j <= i; j++) {
			if (i) A[703 * i + j] = 1ll * u[i][j] * ny[i] % mod;
			B[703 * i + j] = 1ll * v[i][j] * ny[i] % mod;
		}
	}
	A = conv(A, B);
	for (int i = 1; i <= n; i++) {
		int ans = 0;
		for (int y = 0; y <= i - 1; y++) {
			ans = (ans + 1ll * u[0][0] * v[i - 1][y] % mod * c[y]) % mod;
		}
		for (int j = 0; j < i; j++) {
			ans = (ans + 1ll * A[703 * (i - 1) + j] * jc[i - 1] % mod * c[j + 1]) % mod;
		}
		cout << ans << ' ';
	}
}