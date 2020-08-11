#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int count_substr(string s, string sample) {
        int count = 0;
        for (int i = 0; i < s.size() - sample.size() + 1; i++) {
                if (s.substr(i, sample.size()) == sample) {
                        count++; 
                }
        }
        return count;
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;

	while (t--) {
                string s;
                cin >> s;

                int l = s.size();
                int maxx = -999;
                for (int i = l - 1; i >= 1; i--) {
                        for (int j = 0; j < l - i + 1; j++) {
                                int c = count_substr(s, s.substr(j, i)); 
                                if (c >= 2) {
                                        cout << s.substr(j, i).size() << endl; 
                                        return 0;
                                }
                        }
                }
                cout << 0 << endl;
	}
	return 0;
}