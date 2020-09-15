#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

vector<int> primeGenerator(int n) {
        vector<bool> primes(n + 1, true);
        primes[0] = false;
        primes[1] = false;
        for (int i = 2; i <= sqrt(n); i++) {
                if (primes[i]) {
                        for (int j = i * i; j <= n; j += i) {
                                primes[j] = false;
                        }
                }
        }
        vector<int> ans;
        for (int i = 2; i <= n; i++) {
                if (primes[i]) ans.push_back(i);
        }
        return ans;
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;

	while (t--) {
                int p, y;
                cin >> p >> y;
                vector<int> primes = primeGenerator(p);
                for (int i = y; i >= 2; i--) {
                        int flag = 0;
                        // cout << "for i: " << i << " ";
                        for (int j = primes.size(); j >= 0; j--) {
                                if (i % primes[j] == 0) {
                                        flag = 1;
                                        goto label;
                                }
                        }
                        label:
                        if (flag == 0) {
                                cout << i << endl;
                                return 0;
                        }
                }
                cout << -1 << endl;
        }
	return 0;
}