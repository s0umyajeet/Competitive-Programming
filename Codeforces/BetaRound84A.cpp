#include <bits/stdc++.h>
#define int long long
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;


int count_4 = 0;
int count_7 = 0;

void solve(int n) {
        if (n == 4) {
                count_4++;
                return;
        } else if (n == 7) {
                count_7++;
                return;
        } else {
                solve(n - 4);
                solve(n - 7);
        }
}
int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;

	while (t--) {
                int n;
                cin >> n;
		solve(n);

        }
	return 0;
}