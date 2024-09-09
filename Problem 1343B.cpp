#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    long long int n, sum1, sum2, d, i, j;
	long long int a[1000000];
    cin >> t;
    while(t--) {
        sum1 = sum2 = 0;
        cin >> n;
        if(n % 4 != 0){
            cout << "NO" << endl;;
        } else {
            cout << "YES" << endl;
            for(int i = 2; i <= n; i += 2){
                cout << i << endl;
                sum1 += i;
            }
            for(int i = 1; i < n-2; i += 2){
                cout << i << endl;
                sum2 += i;
            }
            cout << sum1-sum2 << endl;
        }
    }
	return 0;
}
