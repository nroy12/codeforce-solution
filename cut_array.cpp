/*

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    int sum=0,s1=0,s2=0,s3=0;
    for(int &x:arr){
        cin>>x;
        sum +=x;
    }

    for(int i=0;i<n-2;i++){
        s1 +=arr[i];
        for(int j=i+1;j<n-1;j++){
            s2 +=arr[j];
            s3 = sum-s1-s2;
            if((s1%3==0 && s2%3==0 &&s3%3==0) || (s1%3!=0 && s2%3!=0 &&s3%3!=0)){
               cout<<i+1<<" "<<j+1<<endl;
               return;
            }
        }
        s2=0;
    }
    cout<<0<<" "<<0<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
} 



*/









// correct code: 




#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int &x : arr) cin >> x;

    vector<int> prefix(n + 1, 0);
    for (int i = 1; i <= n; i++) prefix[i] = prefix[i - 1] + arr[i - 1];

    for (int l = 1; l < n; l++) {
        for (int r = l + 1; r < n; r++) {
            
            int s1 = prefix[l] % 3;
            int s2 = (prefix[r] - prefix[l]) % 3;
            int s3 = (prefix[n] - prefix[r]) % 3;

/*
This code here s1 s2 s3 can be negative so we needed below one ⤵️
*/

            s1 = (s1 + 3) % 3;
            s2 = (s2 + 3) % 3;
            s3 = (s3 + 3) % 3;

            if ((s1 == s2 && s2 == s3) ||
                (s1 != s2 && s2 != s3 && s1 != s3)) {
                cout << l << " " << r << '\n';
                return;
            }
        }
    }

    cout << 0 << " " << 0 << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}