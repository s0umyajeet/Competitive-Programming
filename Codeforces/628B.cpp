#include <bits/stdc++.h>
#define int long long
#define coutans << "ans: "
using namespace std;

int32_t main() {
        int t;
        cin >> t;

        while(t--) {
               int n;
               cin >> n;
               set<int> s;
               int input;
               for (int i = 0; i < n; i++) {
                       cin >> input;
                       s.insert(input);
               }

                cout << s.size() << endl;
        }
        return 0;
}