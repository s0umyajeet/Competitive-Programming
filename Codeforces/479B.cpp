#include <bits/stdc++.h>
#define int long long
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;

int count_instance(string &s, string &target) {
    int count = 0;
    for (int i = 0; i < s.size() - 1; i++) {
        if (s.substr(i, 2) == target)
            count++;
    }
    return count;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int max_count = -1;
        string max_string;
        for (int i = 0; i < s.size() - 1; i++) {
            string sample = s.substr(i, 2);
            int countt = count_instance(s, sample);
            // cout << sample << " " << countt << endl;
            if (countt > max_count) {
                max_count = countt;
                max_string = sample;
            }
        }
        cout << max_string << endl;
    }
    return 0;
}