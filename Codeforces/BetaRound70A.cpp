#include <bits/stdc++.h>
#define int long long
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 3;
	// cin >> t;
        vector<int> vowel_count;
	while (t--) {
		string s;
                getline(cin >> ws, s);
                int count = 0;
                for (int i = 0; i < s.size(); i++) {
                        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                                count++;
                        }
                }
                vowel_count.push_back(count);
	}
        if (vowel_count[0] == 5 && vowel_count[1] == 7 && vowel_count[2] == 5) cout << "YES";
        else cout << "NO" << endl;
	return 0;
}