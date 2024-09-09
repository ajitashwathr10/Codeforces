#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void split(){
    int n, k, count = 0;
    cin >> n >> k;
        
    vector<int> arr;
    arr.push_back(n);

    while(arr.size() < n) {
        int n = arr.back();
        arr.erase(arr.begin() + arr.size()-1);
        for(int i=0; i < min(k-1,n-1); i++) {
            arr.push_back(1);
        }
        arr.push_back(n-k+1);
        count++;
    }
        
    cout << count << endl;
}

int main() {
    int T = 1;
    cin >> T;
    while (T--) {
        split();
    }
    return 0;
}		
		
		