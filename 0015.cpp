#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 20;
    long long a[n + 2][n + 2]{};
    a[0][0] = 1;
    for (int i = 0; i <= n; i++)
        for (int o = 0; o <= n; o++) {
            a[i + 1][o] += a[i][o];
            a[i][o + 1] += a[i][o];
        }
    cout << a[n][n] <<endl;
}

//O(N^2)
