#include <bits/stdc++.h>
using namespace std;
#define int long long

int count3and6(int n) {
        int num3 = 0, num6 = 0;
        // if (n % 6 == 0) {
        //         while (n % 6 == 0) {
        //                 n /= 6;
        //                 num6++;
        //         }
        // }
        if (n % 3 == 0) {
                while(n % 3 == 0) {
                        n /= 3;
                        num3++;
                }
        }
        
        if (__builtin_popcount(n) != 1) return -1;
        else return num3 + num6;
}

int32_t main() {       
        int t;
        cin >> t;
        while (t--) {
                int n;
                cin >> n;
                cout << count3and6(n) << endl;
        }
        return 0;
}