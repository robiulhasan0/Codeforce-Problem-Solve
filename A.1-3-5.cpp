#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int min_1_burles = n;
        for (int coins_5 = 0; coins_5 <= n / 5; ++coins_5) {
            int remainder = n - coins_5 * 5;
            if (remainder % 3 == 0) {

                min_1_burles = 0;
                break;
            } else {

                int needed_1_burles = remainder % 3;
                if (needed_1_burles < min_1_burles) {
                    min_1_burles = needed_1_burles;
                }
            }
        }
        cout << min_1_burles << endl;
    }
    return 0;
}
