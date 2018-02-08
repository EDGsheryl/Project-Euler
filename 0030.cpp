#include <bits/stdc++.h>

using namespace std;

int main() {
    long long p[10] = {0, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    for (int i = 1; i <= 9; i++) {
        for (int o = 1; o <= 5; o++) {
            p[i] *= i;
        }
    }

    long long ans = 0;
    for (int i0 = 0; i0 < 9; i0++) {
        for (int i1 = 0; i1 <= 9; i1++) {
            for (int i2 = 0; i2 <= 9; i2++) {
                for (int i3 = 0; i3 <= 9; i3++) {
                    for (int i4 = 0; i4 <= 9; i4++) {
                        for (int i5 = 0; i5 <= 9; i5++) {
                            if (p[i0] + p[i1] + p[i2] + p[i3] + p[i4] + p[i5] ==
                                i0 * 100000 + i1 * 10000 + i2 * 1000 + i3 * 100 + i4 * 10 + i5) {
                                ans += p[i1] + p[i2] + p[i3] + p[i4] + p[i5];
                                //cout << i0<< i1 << i2 << i3 << i4 << i5 << endl;
                            }
                        }
                    }
                }
            }
        }
    }

    cout << ans << endl;
}

//O(10^N)
