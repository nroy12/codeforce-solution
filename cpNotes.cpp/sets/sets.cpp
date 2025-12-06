#include<bits/stdc++.h>
using namespace std;

int main(){

    set<string>s;
    s.insert("Nitin");
    s.insert("ronit");
    s.insert("Ronit");
    s.insert("rajive");
    s.insert("Nitin"); // set stores different elements 



    auto it =s.find("Ronit");
    if(it!=s.end()){
       // erase functions
       // s.erase(it);
    }

    // function to print the element of the sets
   
      for(auto it = s.begin();it != s.end();++it){
            cout<<*it<<endl;
        }

    //👉 Recommended this
     cout<<endl;
    for(string x:s)
    {
        cout<<x<<endl;
    }






    return 0;
}


