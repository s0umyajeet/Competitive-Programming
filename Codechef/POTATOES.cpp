#include <bits/stdc++.h>
using namespace std;

#define N 2100

vector<int> primeSieve() {
        vector<int> nums(N, 1);
        for (int i = 2; i <= sqrt(N); i++) {
                if (nums[i]) {
                        for (int j = i * i; j <= N; j += i) {
                                nums[j] = 0;
                        }
                }
        }
        vector<int> ans;
        for (int i = 2; i < N; i++) {
                if (nums[i]) ans.push_back(i);
        }
        return ans;
}

int main() {
        int t;
        cin >> t;

        vector<int> primes = primeSieve();
        while (t--) {
                int x, y;
                cin >> x >> y;
                cout << *upper_bound(primes.begin(), primes.end(), x + y) - (x + y)<< endl;
        }
        return 0;
}