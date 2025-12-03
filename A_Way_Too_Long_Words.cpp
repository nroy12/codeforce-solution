#include <bits/stdc++.h>
using namespace std;
         //THis my first code force code

int main(){
    int t;
    cin>>t;
    while(t--){
        string s1;
        cin>>s1;
        int n=s1.length();
        if(s1.length()>10)
          cout<<s1[0]<<(n-2)<<s1[n-1]<<"\n";
        else
         cout<<s1<<"\n";
    }
    return 0;
}