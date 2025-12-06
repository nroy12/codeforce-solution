// Most likely important concepts 💡

// Brute force 💪
#include <bits/stdc++.h>
using namespace std;

int nextgreaterelement(vector<int> v1)
{
    int flag = -1;
    for (int i = 0; i < v1.size(); i++)
    {
        for (int j = i + 1; j < v1.size(); j++)
        {
            if (v1[i] < v1[j] && flag < 0)
            {
                flag = j;
                break;
            }
        }
        if (flag < 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << v1[flag] << endl;
        }
        flag = -1;
    }
    return 1;
}

int main()
{
    vector<int> v{1, 2, 5, 4, 5, 6};
    nextgreaterelement(v);
    return 0;
}
