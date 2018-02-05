#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("1.txt", "r", stdin);

    int n = 0;
    long long x;
    vector<vector<long long> > v;
    while (cin >> x) {
        vector<long long> now;
        now.clear();
        now.push_back(x);
        n++;
        for (int i = 2; i <= n; i++) {
            cin >> x;
            now.push_back(x);
        }
        v.push_back(now);
    }
    long long a[2][n + 2];
    memset(a, 0, sizeof a);
    long long *now = a[0], *next = a[1];
    now[1] = v[0][0];
    for (int i = 1; i < n; i++) {
        memset(next, 0, sizeof next);
        for (int o = 1; o <= i; o++) {
            next[o] = max(next[o], now[o] + v[i][o - 1]);
            next[o + 1] = max(next[o + 1], now[o] + v[i][o]);
        }
        swap(now, next);
    }
    long long ans = now[1];
    for (int i = 1; i <= n; i++) ans = max(ans, now[i]);
    cout << ans << endl;
}

//O(N^2)
