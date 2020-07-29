#include <bits/stdc++.h>
#define int long long
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;


bool valid(int a, int b, int c) {
        if (a < b + c && b < a + c && c < a + b) return true;
        else return false;
}

bool degenerate(int a, int b, int c) {
        if (a == b + c or b == a + c or c == a + b) 
                return true;
        else return false;
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;

	while (t--) {
                vector<int> v(4);
                for (auto &x : v) cin >> x;
                sort(v.begin(), v.end());
                int flag1 = 0;
                int flag2 = 0;
                for (int i = 0; i < 4; i++) {
                        for (int j = i + 1; j < 4; j++) {
                                for (int k = j + 1; k < 4; k++) {
                                        if (valid(v[i], v[j], v[k])) flag1 = 1;
                                        if (degenerate(v[i], v[j], v[k])) flag2 = 1;
                                }
                        }
                }
                if (flag1 == 1) {
                        cout << "TRIANGLE" << endl;
                } else if (flag2 == 1) {
                        cout << "SEGMENT" << endl;
                } else {
                        cout << "IMPOSSIBLE" << endl;
                }
	}
	return 0;
}