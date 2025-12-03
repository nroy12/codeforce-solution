#include<bits/stdc++.h>

using namespace std;

int main(){

    queue<string>q;
    q.push("abcc");
    q.push("efghh");
    q.push("ijhk");
    q.push("xyz");
    q.push("mnlop");

    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }


    return 0;
}