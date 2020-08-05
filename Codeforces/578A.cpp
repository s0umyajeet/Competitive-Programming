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
                int n;
                cin >> n;
                string s;
                cin >> s;

                vector<int> room(10, 0);
                for (int i = 0; i < s.size(); i++) {
                        if (s[i] == 'L') {
                                for (int i = 0; i < 10; i++) {
                                        if (room[i] == 0) {
                                                room[i] = 1;
                                                break;
                                        }
                                }
                        } if (s[i] == 'R') {
                                for (int i = 9; i >= 0; i--) {
                                        if (room[i] == 0) {
                                                room[i] = 1;
                                                break;
                                        }
                                }
                        } if (s[i] >= '0' && s[i] <= '9') {
                                room[s[i] - 48] = 0;
                        }
                }
                for (auto x : room) cout << x;
	}
	return 0;
}