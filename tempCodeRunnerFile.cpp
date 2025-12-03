
#include<bits/stdc++.h>
using namespace std;

int main(){


int m;
cin>>m;
int a[2][m];


for(int i=0;i<m;i++){
    for(int j=0;j<2;j++){
        cin>>a[j][i];
    }
}

int maxi = INT_MIN; // for quality 
int flag1 =0; //
int mini =INT_MAX;  //  for price 
int flag2 =0 ;

    int i=0;
    for(int j =0;j<m;j++){        
      if(a[i][j]>=maxi){
        maxi =a[i][j];
        flag1=j;
      }
}

    i=1;
   for(int j=0;j<m;j++){
    if(a[i][j]<=mini){
        mini=a[i][j];
        flag2=m;
    }
   }




if(flag1==flag2){
    cout<<"Happy Alex"<<"\n";
}
else{
    cout<<"Poor Alex"<<"\n";
}



    return 0;
}





