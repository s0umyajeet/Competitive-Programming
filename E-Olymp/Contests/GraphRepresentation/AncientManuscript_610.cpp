#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int32_t main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        
        int t = 1;
        // cin >> t;

        while(t--) {
                int n;
                cin >> n;
                int roads = 0;
                int input;
                for (int i = 0; i < n; i++) {
                        for (int j = 0; j < n; j++) {
                                cin >> input;
                                if (i > j && input == 1) {
                                        roads++;
                                }
                        }
                }
                cout << roads << endl;
        }
}