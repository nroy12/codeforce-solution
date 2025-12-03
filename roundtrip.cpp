#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int r1;
        int x;
        int d;
        int n;
        cin >> r1 >> x >> d >> n;

        string round;
        cin >> round;

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (round[i] == '1')
            {
                count = count + 1;
            }
            else if (round[i] == '2')
            {
                if (r1 < x)
                {
                    count = count + 1;
                }
                else if(r1>x)
                {
                    if (r1 - d < x && x < r1 + d)
                    {
                        r1 = r1 + x;
                        count = count + 1;
                    }
                }
            }
        }
        cout << count << "\n";
    }
    return 0;
}