#include <bits/stdc++.h>
#define int     long long
#define YES     cout << "YES" << endl
#define NO      cout << "NO" << endl
#define coutans cout << "ans: "     //debug
#define endl    "\n"
using namespace std;


string make_string(int n) {
        string x;
        for (int i = 0; i < n; i++) {
                x += 'a';
        }
        return x;
}

string transform_string(string sample, int n) {
        for (int i = 0; i < n; i++) {
                sample += 'b';
        }
        return sample;
}

int32_t main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        
        int t;
        cin >> t;

        while(t--) {
                int n;
                cin >> n;

                vector<int> v(n);
                for (auto &x : v) cin >> x;
                vector<string> ans;

                for (int i = 0; i < n - 1; i++) {
                        ans.push_back(make_string(v[i]));
                        ans.push_back(make_string(v[i]));

                        if (v[i + 1] > v[i]) {
                                string sample = ans[i + 1];
                                ans[i + 1] = transform_string(sample, v[i + 1]);
                }
        }
        return 0;
}