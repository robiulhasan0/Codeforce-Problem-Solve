#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    for (int i=0; i<t; i++)
    {
        int a;
        cin >> a;
        int sum1=0,sum2=0;
        vector<int>num;
        if(a%2==0)
        {
            if(a%4==0)
            {
                cout << "YES" << endl;
                num.push_back(2);
                for(int i=1; i<=a; i++)
                {
                    if(i%2==0)
                    {
                        num.push_back(i);
                    }
                }
                for(int i=1; i<=a; i++)
                {
                    if(i%2!=0)
                    {
                        num.push_back(i);
                        sum1+=i;
                    }
                }
                for(int i=1; i<=num.size()/2; i++)
                {
                    sum2+=num[i];
                }
                int c = sum2-sum1;
                int x = num.back();
                num.back() = x+c;
                for(int i=1; i<=a; i++)
                {
                    cout << num[i] << " ";
                }
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO";
        }
    }
}

