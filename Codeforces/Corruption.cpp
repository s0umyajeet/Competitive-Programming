#include <bits/stdc++.h>
#define int     double
#define YES     cout << "YES" << endl
#define NO      cout << "NO" << endl
#define coutans cout << "ans: "     //debug
#define endl    "\n"
using namespace std;

void print_vector(vector<int> &v) {
        for (auto x : v) cout << x << " ";
        cout << endl;
}

int32_t main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        
        int t = 1;
        //cin >> t;

        while(t--) {
                int n, p;
                cin >> n >> p;
                vector<int> v(n);
                for (auto &x : v) cin >> x;
                sort(v.begin(), v.end());
                int cut = 0;
                int sum = 0;

                while (v.size() > 0) {
                        sum = 0;
                        sum += v[0] + v[1];
                        cut += (p / 100.0f) * sum;
                        v[1] = sum - cut;
                        v.erase(v.begin());
                        print_vector(v);
                } 
                cout << v[0] << endl; 
        }
        return 0;
}