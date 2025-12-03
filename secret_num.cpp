#include <bits/stdc++.h>
using namespace std;

double calculate(int k){
    double val;
    val=pow(10,k);
    //cout<<val<<"\n";
     val=val+1;
  //  cout<<val<<"\n";
    // val=val+1;
    return val;
}

int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
     vector<long long >v1;
     int k=1;
    long long val;
     val=calculate(k);
     int size1=0;
     while(val<=n){
        double cal = val;
        if(n%val==0){
         while(cal<=n){
            if(cal+val==n){
               v1.push_back(val);
               size1++;
            }
             cal = cal*10;
         }
     }
            val=calculate(k++);
    }

 cout<<size1<<"\n";
 if(size1!=0){
 for(int i=0;i<size1;i++){
    cout<<v1[i]<<" ";
 }
 }
    }
    return  0;
}