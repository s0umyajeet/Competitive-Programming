#include <bits/stdc++.h>
#define int long long
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;
int solve(int n) {
        int count = 0;
        while (n % 6 == 0) {
                count++;
                n /= 6;
        }
        while (n % 3 == 0) {
                count += 2;
                n /= 3;
        }
        if (n == 1) return count;
        else return -1;
}
int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	cin >> t;

	while (t--) {
		int n;
                cin >> n;
                cout << solve(n) << endl;
	}
	return 0;
}