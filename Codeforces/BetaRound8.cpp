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
                string s, s1, s2;
                cin >> s >> s1 >> s2;
                // cout << s << endl;

                bool forward = false;
                bool backward = false;
                //forward
                auto itr1 = s.find(s1);
                auto itr2 = s.find(s2, itr1 + s1.size());
                // cout << "forward ";
                // cout << itr1 << " " << itr2 << endl;
                if (itr1 != string::npos && itr2 != string::npos && itr1 < itr2) {
                        forward = true;
                }

                //backward
                reverse(s.begin(), s.end());
                itr1 = s.find(s1);
                itr2 = s.find(s2, itr1 + s1.size());
                // cout << "backward ";
                // cout << itr1 << " " << itr2 << endl;
                if (itr1 != string::npos && itr2 != string::npos && itr1 < itr2) {
                        backward = true;
                }

                if (backward && forward) cout << "both" << endl;
                if (backward &&  !forward) cout << "backward" << endl;
                if (!backward && forward) cout << "forward" << endl;
                if (!backward && !forward) cout << "fantasy" << endl; 
	}
	return 0;
}