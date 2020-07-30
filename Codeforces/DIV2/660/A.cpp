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

                int m1 = 6;
                int m2 = 10;
                int m3 = 14;
                
                if (n <= m1 + m2 + m3) { 
                        cout << "NO" << endl;
                } else {
                        if (n == 44) {
                                cout << "YES" << endl;
                                cout << "6 7 10 21" << endl;
                        } else if (n == 36) {
                                cout << "YES" << endl;
                                cout << "5 6 10 15" << endl;
                        } else if (n == 40) {
                                cout << "YES" << endl;
                                cout << "5 15 6 14" << endl;
                        } else {
                                cout << "YES" << endl;
                                cout << m1 << " " << m2 << " " << m3 << " " << n - (m1 + m2 + m3) << endl;
                        }
                }
        }
        return 0;
}