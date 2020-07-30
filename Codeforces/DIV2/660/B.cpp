#include <bits/stdc++.h>
#define int     long long
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
                int eights;

                if (n % 4 == 0)
                        eights = (n / 4);
                else eights = (n / 4) + 1;

                for (int i = 0; i < (n - eights); i++) {
                        cout << 9;
                }
                for (int i = 0; i < eights; i++) {
                        cout << 8;
                }
                cout << endl; 
        }
}