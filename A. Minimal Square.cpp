#include<bits/stdc++.h>
using namespace std;

int main()
{
    int count;
    cin >> count;

    for(int i = 0; i < count; ++i)
    {
        int a, b;
        cin >> a >> b;

        int length = max(a, b);
        int width2 = min(a, b) * 2;

        int sqSide = max(length, width2);
        int sqArea = sqSide * sqSide;

        cout << sqArea << endl;
    }

    return 0;
}
