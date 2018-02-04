#include<bits/stdc++.h>

using namespace std;

std::vector<int> GetPrime(long long n) {
    long long top = ceil(sqrt(n));
    int *a = new int[top + 2]{};
    std::vector<int> ret = *(new std::vector<int>());
    for (int i = 2; i <= top; ++i)
        if (!a[i]) {
            ret.push_back(i);
            for (int j = i; j <= top; j += i) a[j] = 1;
        }
    return ret;
}

int main() {
    long long n = 20;
    long long top = n * n;
    auto prime = GetPrime(top);
    long long ans = 1;
    for (auto i : prime) {
        long long j = i;
        while (j * i < n) j = j * i;
        ans *= j;
    }
    cout << ans << endl;
}

//O(sqrt(n))
