#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
     

    ll t;
    cin>>t;
    while(t--){
        vector<ll>ans;
        ll n;
        cin>>n;
        ll c=0;
        ll p=1;
        ll s=0;
        ll p1= p*10+1;
        while(p1<=n){
          if(n%p1==0){
            ans.push_back(n/p1);
            s++;
          }
        p=p*10;
        p1=p*10+1;
        }

        cout<<s<<"\n";
        for(ll i=s-1;i>=0;i--){
            cout<<ans[i]<<" ";
        }
       if(c>0)
        cout<<"\n";
    
    }
    return 0;
}