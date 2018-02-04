#include <bits/stdc++.h>

using namespace std;

int main() {
    for (int i = 1; i <= 1000; i++)
        for (int o = i + 1; o <= 1000; o++) {
            if (i + o > 1000) continue;
            if (1000 - i - o < o) continue;
            if (i * i + o * o == (1000 - i - o) * (1000 - i - o)) {
                cout << i * o * (1000 - i - o);
                return 0;
            }
        }
}

//O(N^2)
