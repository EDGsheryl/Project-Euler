#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 500;
    long long now = 0;
    for (long long i = 1;; i++) {
        now += i;
        int cnt = 0;
        int top = sqrt(now);
        for (long long o = 1; o <= top; o++)
            if (now % o == 0) cnt += 2;
        if (cnt > 500) {
            cout << now << endl;
            return 0;
        }
    }
}

//O(n*sqrt(n))
