#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int smallestFactor(int n) {
        for (int i = 2; i <= n; i++) 
                if (n % i == 0) return i;
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n_Cases = 1;
	// cin >> n_Cases;

	for (int case_i = 1; case_i <= n_Cases; case_i++) {
                int n;
                cin >> n;
                int sum = n;
                while (n > 1) {
                        n /= smallestFactor(n);
                        sum += n;      
                }  
                cout << sum << endl;
        }
	return 0;
}