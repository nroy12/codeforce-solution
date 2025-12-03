#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            int val;
            cin>>val;
            m[val]=m[val]+1;
        }
        int count=0;
        for(auto key:m){
               if(key.first>key.second){
                   int val;
                   val =key.second;
                   count=count+val;
               }
               else if(key.first<key.second){
                    int val;
                    val = key.second - key.first;
                    count =count+val;
               }
            }
            cout<<count<<"\n";
        }

    return 0;
}