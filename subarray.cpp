// kadane algorithm

#include<bits/stdc++.h>
using namespace std;




int main(){


// used Very basic O(N^2)
int maxsum=-2222;
int maxsubarr[10]={-1,-2,3,4,6,-4,3,6,2,7};
int avg=-1111;
int pavg;
for(int i=0;i<10;i++){
int currentsum=0;
for(int j=i;j<10;j++){
    currentsum=currentsum+maxsubarr[j];
    pavg=currentsum/(j-i+1);
    if(pavg>avg){
        avg=pavg;
    }
if(currentsum>maxsum){
    maxsum=currentsum;
}
}
}
cout<<avg<<"\n";
cout<<maxsum;









    return 0;
}
