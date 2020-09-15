
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
                int n, m, x;
                cin >> n >> m >> x;
                int targetX;
                int targetY;
                map<int, int> m1;
                map<int, int> m2;
                vector<pair<int, int>> p1(x);
                for (int i = 0; i < x; i++) {
                        int a, b;
                        cin >> a >> b;
                        p1[i].first = a;
                        p1[i].second = b;
                        m1[a]++;
                        m2[b]++;
                }
                int maxx = -9999;
                for (auto x : m1) {
                        if (x.second >= maxx) {
                                targetX = x.first;
                                maxx = x.second;
                        }
                }
                maxx = -99999;
                for (auto x : m2) {
                        if (x.second > maxx) {
                                cout << "for x = " << x.first << " " << x.second << " ";
                                maxx = x.second;
                                targetY = x.first;
                                cout << "inside if: " << targetY << endl; 
                        } else if (x.second == maxx) {
                                cout << "for x = " << x.first << " " << x.second << " ";
                                if (x.first != targetX)
                                        targetY = x.first;
                                cout << "inside else: " << targetY << endl;    
                        }
                }
                cout << targetX << " " << targetY << endl;
                int count = 0;
                for (int i = 0; i < x; i++) {
                        if (p1[i].first == targetX || p1[i].second == targetY)
                                count++;
                }
                cout << count << endl;
        }
	return 0;
}