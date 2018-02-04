#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<long long> v = *(new vector<long long>());
    v.push_back(2ll);
    long long i = 3;
    auto test = [&v, &i]() -> bool {
        long long top = ceil(sqrt(i));
        for (auto o : v) {
            if (i % o == 0) return false;
            if (o > top) break;
        }
        return true;
    };
    for (; v.size() < 10001; i++) {
        if (test()) v.push_back(i);
    }

    cout << v[10000] << endl;
}

//O(N*Sqrt(N))
