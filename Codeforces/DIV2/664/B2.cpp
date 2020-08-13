#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int a, b, m, n;
map<pair<int, int>, int> m1;

void func(int a, int b) {
        for (int i = -1; i <= 1; i++) {
                for (int j = -1; j <= 1; j++) {
                        a = a + i;
                        b = b + j;
                        if (m1[{a, b}] == 0 && a > 0 && a <= m && b > 0 && b <= n) {        
                                cout << a << " " << b << endl;
                                m1[{a, b}] = 1;
                        }
                }
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
                queue<pair<int, int>> q;
                q.push({a, b});

                while (!q.empty()) {
                        pair<int, int> top = q.front();
                        cout << top.first << " " << top.second << endl;
                        func(top.first, top.second);
                        q.pop();

                        if (top.first + 1 <= n) q.push({top.first + 1, top.second});
                        if (top.first  - 1 > 0) q.push({top.first - 1, top.second});
                        if (top.second  - 1 > 0) q.push({top.first, top.second - 1});
                        if (top.second  + 1 <= m) q.push({top.first, top.second + 1});
                }

	}
	return 0;
}