#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c,d,e,f,g;
    cin >> a;
    int arr[a];
    for(b=0; b<a; b++)
    {
        cin >> c >> d >> e;
        g=e%c;
        if(g==d)
        {
            arr[b]=e;
        }
        if(g>d)
        {
            arr[b]=e-(g-d);
        }
        if(g<d)
        {
            arr[b]=e-g-(c-d);
        }
    }
    for(b=0; b<a; b++)
    {
        cout << arr[b];
        if(b<a-1)
            cout << "\n";
    }
    return 0;
}
