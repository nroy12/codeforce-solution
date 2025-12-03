
// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//      int m,n;
//      cin>>m>>n;
//      vector<int>v1(m);
//      vector<int>v2(n);

//      for(int i =0 ;i<m;i++){
//         int val;
//         cin>>val;
//        // v1.push_back(val);
//         v1[i]=val;
//     }

//  for(int i =0 ;i<n;i++){
//         int val;
//         cin>>val;
//         //v2.push_back(val);
//         v2[i] = val;
//     }        

//    auto min1 = min_element(v1.begin(), v1.end());
//    auto min2 = min_element(v2.begin(), v2.end());

//    if(min1!= v1.end()||min2 != v2.end()){
//     if(*min1== *min2){
//        // cout<<min1<<"\n";
//  cout<< *min1;
//     }
//     else if (*min1 > *min2){
//         int val;
//         val=10*(*min2)+*min1;
//         //cout<<val<<"\n";
//         cout<<val;
//     }
//     else{
//     int val;
//         val=*min2+10*(*min1);
//       //  cout<<val<<"\n";
//         cout<<val;
//     }
//    }
    
//     return 0;
// }











#include<bits/stdc++.h>
using namespace std;

int main() {

	int m,n;
	cin>>m>>n;
	vector<int>v1(m);
	vector<int>v2(n);

	for(int i =0 ; i<m; i++) {
		int val;
		cin>>val;
		v1[i]=val;
	}

	for(int i =0 ; i<n; i++) {
		int val;
		cin>>val;
		v2[i] = val;
	}
     
     sort(v1.begin(),v1.end());
     sort(v2.begin(),v2.end());

     for(int i = 0;i<v1.size();i++){
         auto it = find(v2.begin(), v2.end(),v1[i]);
         if(it!=v2.end()){
            cout<<v1[i];
            return 0;
         }
     }

     if(v1[0]>v2[0]){
        int val;
        val = v2[0]*10+v1[0];
        cout<<val;
     }
     else{
        int val;
        val = v1[0]*10+v2[0];
        cout<<val;
     }
	return 0;
}