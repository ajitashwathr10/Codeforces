#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;
	cin >> t;
    while(t--){
        ll n; 
		cin >> n;
        string s; 
		cin >> s;
        vector<ll> v; 
		ll cur(0);
        for(ll p = n - 1; p >= 0; p--){
            if(s[p] == '1'){
				++cur;
			} else {
				v.push_back(cur);
			}
        }
        for(ll p = 1; p < v.size(); p++){
			v[p] += v[p - 1];
		}
        for(ll p = 0; p < n; p++){
			cout << (p < v.size() ? v[p] : -1) << endl;
		}
        cout << endl;
    }

}