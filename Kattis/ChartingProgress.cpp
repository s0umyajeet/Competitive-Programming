#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;
        string p;
	while (getline(cin, p)) {
                vector<string> v;
                string s;
                while (getline(cin, s)) {
                        v.push_back(s);
                } 
                for (int i = 0; i < v.size(); i++) {
                        int c_1 = count(v[i].begin(), v[i].end(), '*');
	}
	return 0;
}