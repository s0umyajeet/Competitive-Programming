#include <bits/stdc++.h>
#define int long long
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;

vector<int> primeSieve(int n) {
        vector<bool> primes(n + 1, true);
        primes[0] = false;
        primes[1] = false;

        vector<int> ans;
        for (int i = 2; i <= sqrt(n); i++) {
                if (primes[i] == true) {
                        for (int j = i * i; j <= n; j += i) {
                                primes[j] = false;
                        }
                }
        }

        for (int i = 0; i < n + 1; i++) {
                if (primes[i])
                        ans.push_back(i);
        }
        return ans;
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;

	while (t--) {
		int n, k;
                cin >> n >> k;

                vector<int> ans = primeSieve(n);
                // for (auto x : ans) cout << x << " ";     
                int count = 0;
                for (int i = ans.size() - 1; i >= 0; i--) {
                        int target = ans[i] - 1;
                        for (int j = 0; j < i - 1; j++) {
                                if (ans[j] + ans[j + 1] == target)
                                        count++;
                        }
                }
                // cout << count << endl;
                if (count == k || k == 0) cout << "YES" << endl;
                else cout << "NO";
	}
	return 0;
}