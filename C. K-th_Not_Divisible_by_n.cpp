#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >> k;
        int t = k/(n-1);
        int r = k%(n-1);
        if(r==0)
            cout << n*t-1 << endl;
        else
            cout << n*t+r << endl;
    }
    return 0;
}
