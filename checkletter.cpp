#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    t=1;
    while(t--){
        int n ;
        string s;
        string t;
        cin>>n;
        cin>>s>>t;
        for(int i=0;i<n;i++){
            int pos;
            pos = s.find(t[i]);
            if(pos==string::npos){
                cout<<"NO"<<"\n";
                break;
            }
            else if (pos!=string::npos)
                s.erase(pos,1);
    }
    
    if(s.empty())
           cout<<"Yes"<<"\n";

    }
    return 0;
}