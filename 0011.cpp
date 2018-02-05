#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("1.txt", "r", stdin);

    int n = 20;
    long long a[n + 1][n + 1]{};
    long long ans = 0;
    for (int i = 1; i <= n; i++)
        for (int o = 1; o <= n; o++) {
            cin >> a[i][o];
        }
    for (int i = 1; i <= n; i++)
        for (int o = 1; o <= n; o++) {
            if (i + 3 <= n) ans = max(ans, a[i][o] * a[i + 1][o] * a[i + 2][o] * a[i + 3][o]);
        }
    for (int i = 1; i <= n; i++)
        for (int o = 1; o <= n; o++) {
            if (o + 3 <= n) ans = max(ans, a[i][o] * a[i][o + 1] * a[i][o + 2] * a[i][o + 3]);
        }
    for (int i = 1; i <= n; i++)
        for (int o = 1; o <= n; o++) {
            if (o + 3 <= n && i + 3 <= n) ans = max(ans, a[i][o] * a[i + 1][o + 1] * a[i + 2][o + 2] * a[i + 3][o + 3]);
        }
    for (int i = 1; i <= n; i++)
        for (int o = 1; o <= n; o++) {
            if (o + 3 <= n && i - 3 > 0) ans = max(ans, a[i][o] * a[i - 1][o + 1] * a[i - 2][o + 2] * a[i - 3][o + 3]);
        }

    cout << ans << endl;
}

//O(n^2)
