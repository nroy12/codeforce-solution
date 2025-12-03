#include <bits/stdc++.h>

using namespace std;
using namespace chrono;


int main()
{

     auto start = high_resolution_clock::now();  // Start timing


    int n;
    cin >> n;
    int *a=new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >>a[i];
    }
    int m=0;
    int opn=0;
    

       //checking number of -1
       // while cheking number of -1 i count or increse the 0 by 1;
       for(int i=0;i<n;i++){
            if(a[i]==-1){
                m=m+1;
            }
            if(a[i]==0){
                a[i]=a[i]+1;
                opn++;
            }
        }
        if(m%2!=0){
      for(int i=0;i<n;i++){
            if(a[i]==-1){
               a[i]=a[i]+2;
               opn=opn+2;
               break;
            }
        }
    }

    cout<<"Total operation of theis code is : "<<opn;

    delete [] a;
    auto end = high_resolution_clock::now();  // End timing
    duration<double> elapsed = end - start;
    cout << "Time taken: " << elapsed.count() << " seconds" << endl;






    return 0;
}
