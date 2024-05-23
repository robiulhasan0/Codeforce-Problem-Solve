#include<bits/stdc++.h>
using namespace std;

int main() {
    //ios::sync_with_stdio(0);
    //cin.tie(0);
    //cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int one = 0, two = 0;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            if (x == 1) one++;
            else if (x == 2) two++;
        }

        if (two % 2 == 1) {
            if (one >= 2) one -= 2;
            else {
                cout << "NO\n";
                continue;
            }
        }

        if (one % 2 == 0) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
