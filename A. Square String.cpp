#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();

        if (n % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            int mid = n / 2;
            if (s.substr(0, mid) == s.substr(mid, mid))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
