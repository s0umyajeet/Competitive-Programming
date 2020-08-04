#include <bits/stdc++.h>
#define int long long
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;

int primeFactorize(int n) {
        while (n % 2 == 0) {
                n /= 2;
        }
        int max_prime = 2;
        for (int i = 3; i <= sqrt(n); i += 2) {
                while (n % i == 0) {
                        n /= i;
                        max_prime = max(max_prime, i);
                }
        }
        if (n > 2) max_prime = max(n, max_prime);
        return max_prime;
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	cin >> t;

	while (t--) {
                int n;
                cin >> n;
                cout << primeFactorize(n) << endl;
	}
	return 0;
}