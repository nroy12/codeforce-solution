#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    vector<int> a(n);

    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        x = x - 1;
        cin >> a[x];
    }

    bool flag = 1;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] >a[i + 1]) {
                   cout << "Happy Alex\n";
            return 0;
        }
    }
        cout << "Poor Alex\n";

    return 0;
}
