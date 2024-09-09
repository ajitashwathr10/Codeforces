#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int t, n, a;
    cin >> t;
    while(t--){
        int div = 0, sum = 0, one = 0;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a;
            if(a == 1){
                one++;
                sum++;g
            } else {
                sum +=2;
			}
        }
        if(sum % 2 == 0){
            div = sum / 2;
            if(div % 2 == 0){
                cout << "YES" << endl;
            } else {
                if(one) {
                    cout << "YES" << endl;
                } else {
                    cout << "NO" << endl;
                }
            }
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}