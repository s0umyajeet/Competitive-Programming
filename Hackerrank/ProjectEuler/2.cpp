#include <bits/stdc++.h>
#define int long long
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	cin >> t;

	while (t--) {
                int n;
                cin >> n;

                int prev = 1;
                int next = 2;
                int sum = 2;
                while (1) {
                        int temp = next;
                        next += prev;
                        prev = temp;
                        if (next > n) break;
                        if (next % 2 == 0) sum += next;                
                }
                cout << sum << endl;
	}
	return 0;
}