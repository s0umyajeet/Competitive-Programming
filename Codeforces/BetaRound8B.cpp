#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

bool checkVisited(set<pair<int, int>> &visited, int x, int y) {
        if (visited.find({x, y}) != visited.end()) {
                return true;
        } else {
                visited.insert({x, y});
                return false;
        }
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;
       
	while (t--) {
                string s;
                cin >> s;
                int x = 0, y = 0;
                set<pair<int,int>> visited;
                visited.insert({0, 0});
                int final_x = 0;
                int final_y = 0;
                for (int i = 0; i < s.size(); i++) {
                        if (s[i] == 'R') {
                                x++;
                                if (checkVisited(visited, x, y)) {
                                        cout << "BUG" << endl;
                                        return 0;
                                }
                        } else if (s[i] == 'L') {
                                x--;
                                if (checkVisited(visited, x, y)) {
                                        cout << "BUG" << endl;
                                        return 0;
                                }
                        } else if (s[i] == 'U') {
                                y++;
                                if (checkVisited(visited, x, y)) {
                                        cout << "BUG" << endl;
                                        return 0;
                                }
                        } else {
                                y--;
                                if (checkVisited(visited, x, y)) {
                                        cout << "BUG" << endl;
                                        return 0;
                                }
                        }
                        final_x = x;
                        final_y = y;
                }
                int min_dist = abs(final_x - 0) + abs(final_y - 0);
                if (min_dist < s.size()) cout << "BUG" << endl;
                else cout << "OK" << endl;
	}
	return 0;
}