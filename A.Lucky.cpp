#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int a=stoi(s);
    vector<int>v;
    int k=0;
    while(k<6){
        int b=a%10;
    v.push_back(b);
    a/=10;
    k++;
    }
    int A=0,B=0;
    for (int i=0;i<6;i++){
        if(i<3){
            A+=v[i];
        }
        else{
            B+=v[i];
        }
    }
    if(A==B){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    }
    return 0;
}

