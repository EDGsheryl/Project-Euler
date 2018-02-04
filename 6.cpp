#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n = 100;
    long long ans = 0;

    long long SquareSum = (n + 1) * n / 2;
    SquareSum = SquareSum * SquareSum;

    long long SumSquare = 0;
    for (int i = 1; i <= n; i++) SumSquare += i * i;

    ans = SquareSum - SumSquare;
    cout << ans << endl;
}

//O(n)
