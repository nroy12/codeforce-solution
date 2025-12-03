
/*#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 2, 3, 1, 4, 2, 3}; // Sample input array
    map<int, int> freqMap;

    // Count frequency
    for (int num : arr) {
        freqMap[num]++;
    }

    // Store frequencies in another array
    vector<int> freqArray;
    for (auto it : freqMap) {
        freqArray.push_back(it.second);
    }


    cout<<freqArray.size()<<endl;
    // Print frequencies
    cout << "Frequencies stored in freqArray:\n";
    for (int freq : freqArray) {
        cout << freq << " ";
    }
    cout << endl;

    return 0;
}
*/


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// Without map freq: 
int main(){
    int a[]={1,1,1,1,3,3,3,35,5,4};
    int n=10;
    vector<int> freq;
   
    vector<int>my_sort{1,2,3,9,8,6,4,34,64,22};
    sort(my_sort.begin(),my_sort.end());
    for(int x:my_sort){
        cout<<x<<" ";
    }
    
    cout<<"\n";
    int cnt = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) {
            cnt++;
        } else {
            freq.push_back(cnt);
            cnt = 1;
        }
    }
    freq.push_back(cnt); 


return 0;
}