#include <bits/stdc++.h>
#define int long long
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;

	while (t--) {
                string s;
                cin >> s;
                int count_4 = 0;
                int count_7 = 0;
                for (auto x : s) {
                        if (x == '4') count_4++;
                        if (x == '7') count_7++;
                }
                
                if (count_4 == 0 && count_7 == 0) {
                        cout << -1 << endl;
                } else {
                        count_4 >= count_7 ? cout << 4 << endl : cout << 7 << endl;
                }
	}
	return 0;
}