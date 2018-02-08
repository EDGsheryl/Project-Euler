#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 1001;
    long long ans = 1;
    long long cnt = 1;

    for (long long i = 2; i <= 1000; i += 2) {
        for (int o = 1; o <= 4; o++) {
            cnt += i;
            ans += cnt;
        }
    }

    cout << ans << endl;

}

//O(N)
