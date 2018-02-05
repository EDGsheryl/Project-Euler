
std::vector<long long> GetPrime(long long n) {
    long long top = ceil(sqrt(n));
    int *a = new int[top + 2]{};
    std::vector<long long> ret = *(new std::vector<long long>());
    for (int i = 2; i <= top; ++i)
        if (!a[i]) {
            ret.push_back(i);
            for (int j = i; j <= top; j += i) a[j] = 1;
        }
    return ret;
}

bool IsPalindrome(long long k) {
    std::deque<int> a = *(new std::deque<int>()), b = *(new std::deque<int>());
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

long long K_th_PrimeNumber(int n) {
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
    for (; v.size() < n; i++) {
        if (test()) v.push_back(i);
    }
    return v[n-1];
}
