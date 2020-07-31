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
                string s;
                cin >> s;

                int maxx = 0;

                set<int> myset;
                bool capital_exists = false;
                for (int i = 0; i < s.size(); i++) {
                        if (s[i] >= 'a') {
                               myset.insert(s[i]); 
                        } else {
                                capital_exists = true;
                                int size = myset.size();
                                myset.clear();
                                maxx = max(maxx, size);
                        }
                }

                maxx = max(maxx, (int)myset.size());
                if (!capital_exists) cout << myset.size() << endl;
                else cout << maxx << endl;
	}
	return 0;
}