#include <bits/stdc++.h>
using namespace std;

vector<int> primeSieve(int n) {
        bool primes[n + 1];
        memset(primes, true, sizeof(primes));

        for (int i = 2; i * i <= n; i++) {
                if (primes[i]) {
                        for (int j = i * i; j <= n; j += i) {
                                primes[j] = false;
                        }
                }
        }
        vector<int> ans;
        for (int i = 2; i < n; i++) {
                if (primes[i]) ans.push_back(i);
        }
        return ans;

        //To Print the true/false primes matrix
        // for (int i = 1; i <= 10; i++) {
        //         for (int j = i; j <= i + 10; j++) {
        //                 cout << primes[j];
        //         }
        //         cout << endl;
        // }
}

int main() {
        vector<int> v = primeSieve(100);
        for (auto x : v) cout << x << endl;
        return 0;
}