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
		string a, b;
                cin >> a >> b;
                string mod_a;
                string mod_b;
                string mod_sum;

                int sum = stoi(a) + stoi(b);
                string s_sum = to_string(sum);
                
                for (int i = 0; i < a.size(); i++) {
                        if (a[i] != '0') mod_a += a[i];
                }
                
                for (int i = 0; i < b.size(); i++) {
                        if (b[i] != '0') mod_b += b[i];
                }
                
                for (int i = 0; i < s_sum.size(); i++) {
                        if (s_sum[i] != '0') mod_sum += s_sum[i];
                }
                if (stoi(mod_sum) == stoi(mod_a) + stoi(mod_b)) cout << "YES" << endl;
                else cout << "NO" << endl;

        }
	return 0;
}