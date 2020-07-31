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
                int n;
                cin >> n;
                map<int, int> visit;
                for (int i = 0; i < n; i++) {
                        int input;
                        cin >> input;
                        visit[input] = i + 1;
                }
                int min_visit = 9999999999;
                for (auto itr = visit.begin(); itr != visit.end(); itr++) {
                        min_visit = min(min_visit, itr->second);
                }

                for (auto itr = visit.begin(); itr != visit.end(); itr++) {
                        if (min_visit == itr->second) {
                                cout << itr->first << endl;
                                break;
                        }
                }
	}
	return 0;
}