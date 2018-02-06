#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 1000000;

    vector<int> v{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i = 1; i < n; i++) {
        next_permutation(v.begin(), v.end());
    }

    for (auto i:v) {
        cout << i;
    }

}

//O(NK) N is the kth-permuitation , k is the size of array .
