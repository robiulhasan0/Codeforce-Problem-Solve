#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int m;
    cin >> m;
    while(m--)
    {
        int a,b,c;
        cin >> a >> b >> c;

        int mini=min(min(a,b),c);
        int maxi=max(max(a,b),c);

        if((mini==a and maxi==b) or (maxi==a and mini==b))
            cout << c << endl;
        else if((mini==a and maxi==c) or (maxi==a and mini==c))
            cout << b << endl;
        else
        {
            cout << a << endl;
        }
    }
    return 0;

}
