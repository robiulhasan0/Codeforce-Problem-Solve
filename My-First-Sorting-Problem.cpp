#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    cin >> t;
    for (i = 0; i < t; ++i)
        {
        int x, y;
        cin >> x >> y;
        int minimum = min(x, y);
        int maximum = max(x, y);
        cout << minimum << " " << maximum << endl;
    }

    return 0;
}

