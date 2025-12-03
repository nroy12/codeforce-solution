#include <bits/stdc++.h>
using namespace std;

void solve(){
   int x,n;
   cin>>x>>n;
   int val= n%2?x:0;
   cout<<val<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}