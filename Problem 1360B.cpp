#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int t, n, a[100];
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a,a + n);
        vector<int> v;
        int diff = 0;
        for(int i = 1;i<n;i++){
           diff = a[i]-a[i-1];
           v.push_back(diff);
        }
        sort(v.begin(),v.end());
        cout<<v[0]<<endl;
    }
    return 0;
}