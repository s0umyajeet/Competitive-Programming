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
                string s1, s2, s3;
                cin >> s1 >> s2 >> s3;

                map<char, int> count;
                if (s1[1] == '<') {
                        count[s1[2]]++;
                        count[s1[0]]--;
                } else {
                        count[s1[0]]++;
                        count[s1[2]]--;
                }
                if (s2[1] == '<') {
                        count[s2[2]]++;
                        count[s2[0]]--;
                } else {
                        count[s2[0]]++;
                        count[s2[2]]--;
                }
                if (s3[1] == '<') {
                        count[s3[2]]++;
                        count[s3[0]]--;
                } else {
                        count[s3[0]]++;
                        count[s3[2]]--;
                }
                set<int> set;
                for (auto itr = count.begin(); itr != count.end(); itr++) {
                        set.insert(itr->second);
                }
                if (set.size() < 3) cout << "Impossible" << endl;
                else {
                        vector<pair<int, char>> p(3);
                        int i = 0;
                        for (auto itr = count.begin(); itr != count.end(); itr++) {
                                p[i].first = itr->second;
                                p[i].second = itr->first;
                                i++;
                        }
                        sort(p.begin(), p.end());
                        for (int i = 0; i < 3; i++) {
                                cout << p[i].second;
                        }
                }
	}
	return 0;
}