#include <bits/stdc++.h>
using namespace std;

int main() {
        int t;
        cin >> t;

        while (t--) {
                int n;
                cin >> n;

                set<int> s;
                int input = 0;
                for(int i = 0; i < n; i++) {
                        cin >> input;
                        s.insert(input);
                }

                bool found = false;
                if (s.size() == 1) {
                        auto itr = s.begin();
                        if (*itr == 1) cout << "YES" << endl;
                        else cout << "NO" << endl;
                        found = true;
                }
                
                if (found) continue;
                vector<int> v(s.begin(), s.end());

                for (int i = 0; i < n - 1; i++) {
                        for (int j = i + 1; j < n; j++) {
                                if (__gcd(v[i], v[j]) == 1) {
                                        cout << "YES" << endl;
                                        found = true;
                                        goto done;
                                }                                
                        }
                }

                done:
                if (!found) cout << "NO" << endl;
        }
        return 0;        
}