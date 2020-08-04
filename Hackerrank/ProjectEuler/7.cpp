#include <bits/stdc++.h>
#define int long long
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;

vector<int> primeSieve() {
        vector<bool> numbers(110001, true);
        vector<int> primes;
        
        numbers[0] = false;
        numbers[1] = false;

        for (int i = 2; i <= sqrt(110001); i++) {
                if (numbers[i]) {
                        for (int j = i * i; j <= 110001; j += i) {
                                numbers[j] = false;
                        }
                }
        }
        for (int i = 0; i <= 110001; i++) {
                if (numbers[i])
                        primes.push_back(i);
        }
        return primes;
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	cin >> t;
        vector<int> v = primeSieve();
	while (t--) {
                int n;
                cin >> n;
                cout << v[n - 1] << endl;
	}
	return 0;
}