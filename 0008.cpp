#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("1.txt", "r", stdin);
    string s;
    priority_queue<pair<long long, string>, vector<pair<long long, string> >, less<pair<long long, string> > > q;
    while (!q.empty()) q.pop();
    string str;
    while (cin >> str) {
        s = s + str;
    }

    for (int i = 0; i + 12 < s.size(); i++) {
        long long now = 1;
        for (int o = i; o < i + 13; o++) now = now * (s[o] - '0');
        q.push(make_pair(now, s.substr(i, 13)));
    }

    cout << q.top().first << endl;
}

//O(N)
