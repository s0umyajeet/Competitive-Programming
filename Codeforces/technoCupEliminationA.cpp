#include <bits/stdc++.h>
#define int long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	cin >> t;
    int flag = 0;
	while (t--) {
		int n;
        cin >> n;
        if (n == 1) {
            flag = 1;
        }
	}
    if (flag == 0) cout << "EASY" << endl;
    else cout << "HARD" << endl;
	return 0;
}