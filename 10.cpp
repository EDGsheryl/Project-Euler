#include <bits/stdc++.h>

using namespace std;


std::vector<long long> GetPrime(long long n) {
    long long top = ceil(sqrt(n));
    int *a = new int[top + 2]{};
    std::vector<long long> ret = *(new std::vector<long long>());
    for (int i = 2; i <= top; ++i)
        if (!a[i]) {
            ret.push_back(i);
            for (int j = i; j <= top; j += i) a[j] = 1;
        }
    return ret;
}

int main() {
    auto prime = GetPrime(2000000ll*2000000ll);
    long long ans = 0;
    for (auto i:prime) ans += i;
    cout << ans << endl;
}

//O(Sqrt(n^2))
