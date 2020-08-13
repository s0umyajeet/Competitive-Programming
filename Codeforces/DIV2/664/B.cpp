#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int n, m, a, b;
map<pair<int, int>, int> m1;

void func(int x, int y) {
        if (m1[{x, y}] == 0) {
                if (x <= 0 || x > n) return;
                if (y <= 0 || y > m) return;
                cout << x << " " << y << endl;
                m1[{x, y}] = 1;
                func(x + 1, y);
                func(x - 1, y);
                func(x, y - 1);
                func(x, y + 1);
        }
        
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;

	while (t--) {
                cin >> n >> m >> a >> b;
                func(a, b);
        }
	return 0;
}