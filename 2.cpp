#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<long long> v = *(new vector<long long>());
    long long ans = 0;
    v.clear();
    v.push_back(1);
    v.push_back(2);
    while (v[v.size() - 1] + v[v.size() - 2] < 4000000)
        v.push_back(v[v.size() - 1] + v[v.size() - 2]);
    for (auto i : v)
        if (i % 2 == 0) {
            ans += i;
        }
    cout << ans << endl;
}

//O(n)
