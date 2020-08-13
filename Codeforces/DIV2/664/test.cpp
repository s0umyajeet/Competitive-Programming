#include <bits/stdc++.h>

using namespace std;

#define int long long
#define endl '\n'
#define MOD 1000000007
#define maxn 110

map<pair<int, int>, int> vis;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

void solve() {
    string s;
    cin >> s;

    int x = 0, y = 0;
    vis[{0, 0}] = 1;
    for (auto ch: s) {
        int px = x, py = y;
        if (ch == 'L')
            x--;
        else if (ch == 'R')
            x++;
        else if (ch == 'D')
            y--;
        else y++;

        if (vis[{x, y}] == 1) {
            cout << "BUG" << endl;
            return;
        }
        vis[{x, y}] = 1;

        for (int i = 0; i < 4; i++) {
            int xx = dx[i] + x;
            int yy = dy[i] + y;

            if ((xx != px or yy != py) and vis[{xx, yy}]) {
                cout << "BUG" << endl;
                return;
            }
        }
    }
    cout << "OK" << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
//    cin >> t;

    while (t--)
        solve();
    return 0;
}