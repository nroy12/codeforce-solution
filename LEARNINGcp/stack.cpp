#include<bits/stdc++.h>
using namespace std;

int main(){

    stack<int>s;
    s.push(23);
    s.push(34);
    s.push(53);
    s.push(43); // Last element input 
    
    //printout values of the stack
    while(!s.empty()){
        cout<<s.top()<<endl;
         s.pop();
    }



    return 0;
}