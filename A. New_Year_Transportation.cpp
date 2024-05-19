#include <bits/stdc++.h>
using namespace std;

#define MX 100010

int graph[MX];
bool vis[MX];

int main() {
    int n, t;
    cin >> n >> t;

    for (int i = 1; i < n; i++) {
        int a;
        cin >> a;
        graph[i] = i + a;
    }

    stack<int> s;
    s.push(1);
    vis[1] = true;

    while (!s.empty()) {
        int node = s.top();
        s.pop();

        int next = graph[node];
        if (!vis[next]) {
            vis[next] = true;
            s.push(next);
        }
    }

    if (vis[t]) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
