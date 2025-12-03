
// FURNITURE PROBLEMS

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // CODE We have
        // Input : -
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int m = 10;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > m)
            {
                count++;
            }
        }
        cout<<count<<endl;
     for (int i = 0; i < n; i++)
        {
            if (a[i] > m)
            {
                cout<<1<< " ";
            }
        }
    }
    return 0;
}
