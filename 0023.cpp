#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 28123;
    long long f[n + 2]{};

    for (int i = 1; i <= n; i++) {
        for (int o = 2; o <= sqrt(i); o++)
            if (i % o == 0) {
                f[i] += o;
                if (o != i / o) f[i] += i / o;
            }
        f[i]++;
    }

    long long ans = 0;
    for (int i = 1; i <= n; i++) {
        bool flag = 0;
        for (int o = 1; o <= i - o; o++)
            if (f[o] > o && f[i - o] > i - o) {
                flag = 1;
                break;
            }
        if (!flag) ans += i;
    }
    cout << ans << endl;

}

//O(N*sqrt(N)+N^2)
