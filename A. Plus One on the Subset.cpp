#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[50]; // Maximum size of the array is 50

        // Read array elements
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Find the maximum element in the array
        int max_value = *max_element(a, a + n);

        // Calculate the total number of operations needed
        int operations = 0;
        for (int i = 0; i < n; ++i) {
            operations += max_value - a[i];
        }

        // Output the result for the current test case
        cout << operations << endl;
    }

    return 0;
}
