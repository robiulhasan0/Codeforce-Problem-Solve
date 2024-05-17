#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,a,b,ans=0;
    cin >> n;
    while(n--)
    {
        cin >> a >> b;
        if(a>b)
            ans++;
        else if(a<b)
            ans--;
    }
    if(ans==0)
        cout << "Friendship is magic!^^" << endl;
    else if(ans>0)
        cout << "Mishka" << endl;
    else
    {
        cout << "Chris" << endl;
    }
    return 0;
}
