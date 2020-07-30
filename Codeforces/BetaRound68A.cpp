#include <bits/stdc++.h>
#define int long long
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;

struct participant {
        string handle;
        int good_hacks;
        int bad_hacks;
        int a;
        int b;
        int c;
        int d;
        int e;
        int score;
};

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;

	while (t--) {
                int n;
                cin >> n;
                vector<participant> v(n);
                int maxx = -99999999;
                string winner;
                for (int i = 0; i < n; i++) {
                        cin >> v[i].handle;
                        cin >> v[i].good_hacks;
                        cin >> v[i].bad_hacks;
                        cin >> v[i].a;
                        cin >> v[i].b;
                        cin >> v[i].c;
                        cin >> v[i].d;
                        cin >> v[i].e;

                        v[i].score =   v[i].good_hacks * 100 
                                     - v[i].bad_hacks * 50
                                     + v[i].a
                                     + v[i].b
                                     + v[i].c
                                     + v[i].d
                                     + v[i].e;

                        if (v[i].score > maxx) {
                                winner = v[i].handle;
                                maxx = v[i].score;
                        }
                }
                cout << winner << endl;
	}
	return 0;
}