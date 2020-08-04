#include <bits/stdc++.h>
#define int long long
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;

int divisor_count(int n) {
        vector<int> v;
        int count = 0;
        while (n % 2 == 0) {
                count++;
                n /= 2;
        }
        v.push_back(count);
        for (int i = 3; i <= sqrt(n); i += 2) {
                count = 0;
                while (n % i == 0) {
                        n /= i;
                        count++;
                }
                v.push_back(count);
        }
        if (n > 2) v.push_back(1);
        
        int divisors = 1;
        for (int i = 0; i < v.size(); i++) {
                divisors *= (v[i] + 1);
        }
        return divisors;
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	cin >> t;

	while (t--) {
                int x;
                cin >> x;
                bool flag = false;
                int i = 1;

                while (!flag) {
                        int n = (i * (i + 1)) / 2;
                        if (divisor_count(n) > x) {
                                cout << n << endl;
                                flag = true;
                        }
                        i++;
                }
        }
	return 0;
}