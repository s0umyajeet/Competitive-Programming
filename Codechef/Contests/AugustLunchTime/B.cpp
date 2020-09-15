#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

pair<int, int> findNext(vector<int> &v) {
        int maxx = -9999;
        vector<int> temp = v;
        auto itr = find(temp.begin(), temp.end(), 0);
        set<pair<int, int>> s1;
        while (itr != temp.end()) {
                auto orig = itr;
                int count = 0;
                while (*itr == 0) {
                        count++;
                        itr++;
                }
                if (count > maxx) {
                        maxx = count;
                        s1.insert({orig - temp.begin(), count}); 
                }
                itr = find(itr + 1, temp.end(), 0);
        }
        pair<int, int> p = *s1.begin();
        // cout << "max range found at i = " << p.first << " with length: " << p.second << endl;
        while (v[p.first] == 0) {
                v[p.first] = 1;
                p.first++;
        }
        // cout << "v looks like: ";
        // for (auto x : v) cout << x << " ";
        // cout << endl;
        if (maxx == -9999) return {-1, -1};
        else return *s1.begin();
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	cin >> t;

	while (t--) {
                int n;
                cin >> n;
                vector<int> v(n);
                int c1 = 0;
                for (auto &x : v) {
                        cin >> x;
                        c1 += (x == 1);
                }
                int winner = 0;
                int turn = 0;
                pair<int, int> loc = findNext(v);
                cout << loc.first << " " << loc.second << endl;
                while (1) {
                        pair<int, int> loc = findNext(v);
                        if (loc.first == -1) {
                                break;
                        } else {
                                // cout << loc.first << " " << loc.second << endl;
                                if (loc.second % 2 == 0) {
                                        if (turn == 0) {
                                                winner = 1;
                                        } else winner = 0;
                                } else {
                                        if (turn == 0) {
                                                winner == 0;
                                        } else winner = 1;
                                }
                                turn = (turn == 0 ? 1 : 0);
                        }
                        cout << "winner: " << winner << " turn: " << turn << endl;
                }
                if (c1 != n) cout << (winner == 0 ? "Yes" : "No") << endl;
                else cout << "No" << endl;
	}
	return 0;
}