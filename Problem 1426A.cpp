#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
		int n, x;
        cin >> n >> x;
        int c = 2, count = 1;
        while(c < n){
            c += x;
            count++;
        }
        cout << count << endl;
    }
    return 0;
} 

