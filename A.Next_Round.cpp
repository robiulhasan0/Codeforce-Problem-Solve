#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, j;
    cin >> n >> j;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int p = 0;
    for (int i = 0; i < n; i++) {

        if (a[i] >= a[j-1] && a[i] > 0) {
            p++;
        }
    }
    cout << p << endl;

    return 0;
}
