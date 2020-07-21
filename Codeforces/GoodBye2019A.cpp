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
                int n, k1, k2;
                cin >> n >> k1 >> k2;

                vector<int> p1(k1);
                vector<int> p2(k2);

                for (auto &x : p1) cin >> x;
                for (auto &x : p2) cin >> x;

                sort(p1.begin(), p1.end(), greater<int>());
                sort(p2.begin(), p2.end(), greater<int>());

                if (p1[0] > p2[0]) YES;
                else NO;
                        
        }
}

