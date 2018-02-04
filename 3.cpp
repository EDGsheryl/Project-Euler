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
    long long n = 600851475143;
    vector<int> prime = GetPrime(n);
    for (auto i : prime)
        if (n % i == 0) ans = i;
    cout << ans << endl;
}

//O(sqrt(n))
