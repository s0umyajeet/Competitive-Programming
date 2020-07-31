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
                int input;
                int score = 0;
                vector<int> v(6);
		for (int i = 0; i < 6; i++) {
                        cin >> v[i];
                        score += v[i];
                }	        
                if (score & 1) {
                        cout << "NO" << endl;
                        return 0;
                }
                score /= 2;

                for (int i = 0; i < 6; i++) {
                        for (int j = 0; j < 6 && j != i; j++) {
                                for (int k = 0; k < 6 && k != j && k != i; k++) {
                                        if (v[i] + v[j] + v[k] == score) {
                                                cout << "YES" << endl;
                                                return 0;
                                        }
                                }
                        }
                }
                cout << "NO" << endl;
	}
	return 0;
}