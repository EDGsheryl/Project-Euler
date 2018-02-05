#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 1000000;
    long long ans = 1;
    map<long long, int> m;
    m.clear();
    m[1] = 1;
    std::function<int(long long)> f = [&](long long q) -> int {
        return m.count(q) ? m[q] : m[q] = f(q & 1 ? 3 * q + 1 : q / 2) + 1;
    };

    for (int i = 1; i <= n; i++) {
        if (f(ans) < f(i)) ans = i;
    }

    cout << ans << endl;
}

//O(nlg(n))
