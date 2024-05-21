#include <bits/stdc++.h>
using namespace std;

#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nl '\n'
typedef long long int ll;
typedef unsigned long long int llu;

int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool ans = true;
        map<char, int> mp;

        for (int i = 0; i < n; )
        {
            char current_char = s[i];
            mp[current_char]++;
            while (i < n && s[i] == current_char)
            {
                i++;
            }
            if (mp[current_char] > 1)
            {
                ans = false;
                break;
            }
        }

        if (ans) cout << "YES" << nl;
        else cout << "NO" << nl;
    }
    return 0;
}
