#include<bits/stdc++.h>
using namespace std;

// Brute force apporach 
void rotate_brute(vector<int>& nums, int k) {
    
    int size1 = nums.size();
	int uprotat = k%size1;
	
	for(int i=1;i<=uprotat;i++){
        int temp = nums[size1-1];
        int j=0;
	   for( j=size1-1;j>0;j--){
	       nums[j]=nums[j-1];
        }
	   nums[j] = temp;
	}
}




void rotate_optimize(vector<int>&nums,int k){

     











}



int main(){

    vector<int>num1{1,2,3,4,5};
    //rotate_brute(num1,3);
     for(auto x:num1){
        cout<<x<<"\n";
     }


    rotate_optimize(num1,4);



    return 0;
}

