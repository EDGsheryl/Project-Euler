#include<bits/stdc++.h>

using namespace std;

bool IsPalindrome(long long k) {
    deque<int> a = *(new deque<int>()), b = *(new deque<int>());
    while (k) {
        a.push_back(k % 10);
        b.push_front(k % 10);
        k = k / 10;
    }
    while (a.size()) {
        if (a.front() != b.front()) return 0;
        a.pop_front();
        b.pop_front();
    }
    return 1;
}

int main() {
    long long ans = 10000;
    for (int i = 999; i > 99; i--)
        for (int o = 999; o > 99; o--) {
            long long j = i * o;
            if (j > ans && IsPalindrome(j)) ans = j;
        }
    cout << ans << endl;
}

//O(N^2)
