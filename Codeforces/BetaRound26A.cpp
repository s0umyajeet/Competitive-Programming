#include <bits/stdc++.h>
#define int long long
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;

bool checkPrime(int n) {
        if (n == 1) return false;
        if (n == 2) return true;
        for (int i = 2; i <= sqrt(n); i++) {
                if (n % i == 0) return false;
        }
        return true;
}

int count_divisors(int n) {
        int count = 0;
        for (int i = 1; i <= sqrt(n); i++) {
                if (n % i == 0) {
                        if (i != n / i) {
                                if (checkPrime(i)) count++;
                                if (checkPrime(n / i)) count++;
                        } else {
                                if (checkPrime(i)) count++;
                        }
                }
        }
        return count;
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;

	while (t--) {
                int n;
                cin >> n;
                int count = 0;
                for (int i = 1; i <= n; i++) {
                        if (count_divisors(i) == 2) count++;
                }
                cout << count << endl;
        }       
	return 0;
}