#include <bits/stdc++.h> 
  #define int long long int
   
  using namespace std;
  signed main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t=1;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    int ans=0;
    vector<int> v;
    vector<int> bits;
    for(int i=0;i<61;i++){
     if(n & (1ll<<i)){ans++;bits.push_back((1LL<<i));}
    }
    ans++;
    v.push_back(n);
    for(auto it:bits){
     if(n-it>0){
      v.push_back(n-it);
     }
    }
 
    reverse(v.begin(),v.end());
    cout<<v.size()<<endl;
    for(auto it:v){
     cout<<it<<" ";
    }
    cout<<endl;
   }
   return 0;
  }