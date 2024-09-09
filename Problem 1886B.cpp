#include <bits/stdc++.h>
using namespace std;


double dist(pair<double, double> u, pair<double, double> v){
    return sqrt((u.first - v.first) * (u.first - v.first)  + (u.second - v.second) * (u.second - v.second)); 
}

int main(){
    long t; 
	cin >> t;
    while(t--){
        pair<double, double> h, a, b; 
		cin >> h.first >> h.second;
		cin >> a.first >> a.second;
		cin >> b.first >> b.second;

        double za = dist(pair<double, double>(0.0, 0.0), a);
        double zb = dist(pair<double, double>(0.0, 0.0), b);
        double ha = dist(h, a);
        double hb = dist(h, b);
        double ab = dist(a, b); ab /= 2.0;

        double res = (za > ha) ? za : ha; 
        double cand = (zb > hb) ? zb : hb; res = (res < cand) ? res : cand; 
        cand = (za > ab) ? za : ab; cand = (cand > hb) ? cand : hb; res = (cand < res) ? cand : res; 
        cand = (zb > ab) ? zb : ab; cand = (cand > ha) ? cand : ha; res = (cand < res) ? cand : res; 
        cout << fixed << setprecision(8) << res << endl;
    }

}