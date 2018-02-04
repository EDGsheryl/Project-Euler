#include<bits/stdc++.h>

using namespace std;

int main() {
    long long ans = 0;
    long long n = 999;

    ans += (1 + n / 3) * (n / 3) * 3 / 2;
    ans += (1 + n / 5) * (n / 5) * 5 / 2;
    ans -= (1 + n / 15) * (n / 15) * 15 / 2;
    //O(1)


    //for (int i = 1; i <= n; i++) if (i % 3 == 0 || i % 5 == 0) ans += i;
    //O(n)

    cout << ans << endl;
}

//1000 is equal to 1000 ,but we need the number which is below 1000
