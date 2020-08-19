#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;

	while (t--) {
                string time;
                int min;
                cin >> time >> min;
                int hrr = stoi(time.substr(0, 2));
                int minn = stoi(time.substr(3, 2));
                int ans_min = (min + minn);
                int ans_hr = hrr;
                if (ans_min >= 60) {
                        ans_hr += ans_min / 60;
                        ans_min %= 60;
                        if (ans_hr >= 24) {
                                ans_hr %= 24;
                        }
                }
                if (ans_hr < 10) cout << "0";
                cout << ans_hr << ":";
                if (ans_min < 10) cout << "0";
                cout << ans_min << endl;
	}
	return 0;
}