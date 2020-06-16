#include <bits/stdc++.h>
using namespace std;

long long min(long long a, long long b) {
        if (a <= b) return a;
        else return b;
}

int main() {
        long long p;
        cin >> p;

        int smallest_root = 99999999;
        int count = 0;

        for (int i = 2; i < p; i++) {
                unordered_set<int> s;
                long long val = 0;
                for (int j = 0; j <= p - 2; j++) {
                        val = pow(i, j);
                        s.insert(val % p);
                }
                if (s.size() == p - 1) {
                        count++;
                        smallest_root = min(smallest_root, val % p);
                }
        }
        cout << smallest_root << " " << count << endl;
        return 0;
}