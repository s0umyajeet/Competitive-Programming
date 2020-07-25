#include <bits/stdc++.h>
#define int     long long
#define YES     cout << "YES" << endl
#define NO      cout << "NO" << endl
#define coutans cout << "ans: "     //debug
#define endl    "\n"
using namespace std;

bool find_number(vector<int> &even_set, vector<int> &odd_set, vector<int> &visited, int mode) {
        if (mode == 0) {
                for (auto itr = even_set.begin(); itr != even_set.end(); itr++) {
                        if (find(visited.begin(), visited.end(), *itr) == visited.end()) {
                                visited.push_back(*itr);
                                return true;
                        }
                }
        } else {
                for (auto itr = odd_set.begin(); itr != odd_set.end(); itr++) {
                        if (find(visited.begin(), visited.end(), *itr) == visited.end()) {
                                visited.push_back(*itr);
                                return true;
                        }       
                }
        }
        return false;
}

int32_t main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        
        int t = 1;
        //cin >> t;

        while(t--) {
                int n, m;
                cin >> n >> m;

                vector<int> v(n);
                vector<int> k(m);
                vector<int> odd_set;
                vector<int> even_set;
                vector<int> visited;

                for (auto &x : v) cin >> x;
                for (auto &x : k) {
                        cin >> x;
                        if (x & 1) odd_set.push_back(x);
                        else even_set.push_back(x);
                }

                int count = 0;
                for (int i = 0; i < n; i++) {
                        if (v[i] % 2) {
                                if (find_number(even_set, odd_set, visited, 0))
                                        count++;
                        } else {
                                if (find_number(even_set, odd_set, visited, 1))
                                        count++;
                        }
                }
                cout << count << endl;
        }
        return 0;
}