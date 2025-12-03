// #include <bits/stdc++.h>
// using namespace std;


// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int a[n];

//         for (int i = 0; i < n; i++)
//             cin >> a[i];

//        int sum=0;
//         for (int s : a)        
//             sum += s;

//         int pag{0};
//         pag = sum / n;
//         int ag;

//         cout<<pag<<"\n";
//         int sum1;
//         for (int i = 0; i < n; i++)
//         {
//             sum1 = sum;
//             int k=n-1;
//             while(k>i){
//             {
//                 ag = sum1/(k+1);
//                 if (ag > pag)
//                 {
//                     pag = ag;
//                     cout<<pag<<"\n";
//                 }
//                 sum1 = sum1-a[k];
//                 cout<<i<<" "<<k<<"\n";
//                 k=k-1;
//             }
//             sum = sum - a[i];
//         }
//     }
//        cout << pag << "\n";
// }
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
            cin >> a[i];

       int sum=0;
        for (int s : a)        
            sum += s;


/*
       cout<<pag<<"\n";
        int sum1;
        for (int i = 0; i < n; i++)
        {
            sum1 = sum;
            int k=n-1;
            while(k>i){
            {
                ag = sum1/(k+1);
                if (ag > pag)
                {
                    pag = ag;
                    //cout<<pag<<"\n";
                }
                sum1 = sum1-a[k];
               // cout<<i<<" "<<k<<"\n";
                k=k-1;
            }
            sum = sum - a[i];
        }
    }
       cout << pag << "\n";
*/


int max1=sum/n;
int avg;
for(int i =0;i<n;i++){
int currentsum=0;

for(int j=i;j<n;j++){
    currentsum=currentsum+a[i];
    avg=currentsum/(j-i);
    max1=max(max1,avg);
  }
  }

  cout<<max1<<"\n";
    }
return 0;
    }



