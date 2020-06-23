#include <bits/stdc++.h>
using namespace std;

int main() {
        int t = 1; 
        //cin >> t;
        while (t--) {
                int n, k;
                cin >> n >> k;  

                vector<int> v(n);
                while (k--) {
                        string s;
                        cin >> s;
                        if (s == "CLICK") {
                                int tweet;
                                cin >> tweet;
                                if (v[tweet - 1] == 1) v[tweet - 1] = 0;
                                else if (v[tweet - 1] == 0) v[tweet - 1] = 1;
                        } else if (s == "CLOSEALL") {
                                for (auto &x : v) x = 0;
                        }
                        cout << count(v.begin(), v.end(), 1) << endl;
                }
        }
        return 0;
}