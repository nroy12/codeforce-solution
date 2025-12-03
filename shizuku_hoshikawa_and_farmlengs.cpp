#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2 != 0){
            cout<<0<<"\n";
        }
        else{
            int count = 0;
            int y;
            int x = 0;
             y=n-(2*x);
            while(y>= 0){
              if(y%4==0){
                count++;
              }
              x=x+1;
             y=n-(2*x);

            }
            cout<<count<<"\n";
        }
    }

    return 0;
}