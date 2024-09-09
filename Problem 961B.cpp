#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void read(vec &v,ll n){
	ll temp;
	for(ll i = 0; i < n; i++){
		scanf("%lld", &temp);
		v.emplace_back(temp);
	}
}
template <class T> void max_self(T &a, T b){ a = max(a,b); }

int main() {
	int n, k;
	vector<int> lectures;
	read(lectures, n);
	vector<int> rem;
	read(rem, n);
	vector<ll> dp(n+1);
	ll total = 0;
	for(int i = 0; i < n; i++) {
		if(!rem[i]) {
			dp[i + 1] = dp[i] + lectures[i];
		} else {
			total += lectures[i];
			dp[i + 1] = dp[i];
		}
	}
	ll max = 0;
	for(int i = 0; i < n - k + 1; i++) {
		ll temp = dp[i + k] - dp[i];
		max_self(max, temp);
	}
	cout << (total + max) << endl;
	return 0;
}
	