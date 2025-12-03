#include <bits/stdc++.h>
using namespace std;

int Grthan(vector<int>&a,int flag){

  int my_elem=a[flag];
  int count=0;
  for(int x:a){
    if(x>=my_elem){
      count++;
    }
  }
return my_elem*count;
}


void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    vector<int>freq;
    int m=0;
    for(int i=1;i<n;i++){
       if(a[i-1]==a[i]){
          freq[m]=freq[m]+1;
       }
       else{
           freq[m]=freq[m]+1;
           m=m+1;
       }
    }

    int maxi=-1;
    for(int i=0;i<m+1;i++){
        int freq_pro=Grthan(freq,m+1,i);
       maxi=max(maxi,freq_pro);
    }
    cout<<maxi<<"\n";
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



// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;//
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         for (int i = 0; i < n; ++i)
//             cin >> a[i];

//         sort(a.begin(), a.end());

//         bool ok = true;
//         // Check all even positions (1-based), i.e. 1,3,5,... in 0-based
//         for (int i = 1; i + 1 < n; i += 2) {
//             if (a[i] != a[i + 1]) {
//                 ok = false;
//                 break;
//             }
//         }

//         cout << (ok ? "YES\n" : "NO\n");
//     }

//     return 0;
// }
