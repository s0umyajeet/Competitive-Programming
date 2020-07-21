#include <bits/stdc++.h>
#define int     long long
#define YES     cout << "YES" << endl
#define NO      cout << "NO" << endl
#define coutans cout << "ans: "     //debug
#define endl    "\n"
using namespace std;

int32_t main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        
        int t;
        cin >> t;

        while(t--) {
                int n;
                cin >> n;

                vector<int> necklace(n);
                vector<int> bracelet(n);

                for (auto &x : necklace) cin >> x;
                for (auto &x : bracelet) cin >> x;

                sort(necklace.begin(), necklace.end());
                sort(bracelet.begin(), bracelet.end());
                
                for (auto x : necklace) cout << x << " ";
                cout << endl;
                for (auto x : bracelet) cout << x << " ";
                cout << endl;
        }
}