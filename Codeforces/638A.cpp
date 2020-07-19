#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
        int t;
        cin >> t;
        while (t--) {
                int n;
                cin >> n;

                int sum1 = 0;
                int sum2 = 0;


                int i = 1;
                int j = n;
                while (i < j) {
                        if (i % 2 == 0) {
                                sum1 += min(pow(2, i), pow(2, j));
                                sum2 += max(pow(2, i), pow(2, j));
                        } else {
                                sum2 += min(pow(2, i), pow(2, j));
                                sum1 += max(pow(2, i), pow(2, j));
                        }
                        i++; j--;
                }
                
                // for (int i = 1; i < n; i++) {
                //         if (i % 2 == 0) {
                //                 sum1 += min(pow(2, i), pow(2, i + 1));
                //                 sum2 += max(pow(2, i), pow(2, i + 1));
                //         } else {
                //                 sum2 += min(pow(2, i), pow(2, i + 1));
                //                 sum1 += max(pow(2, i), pow(2, i + 1));
                //         }
                // }
                cout << abs(sum1 - sum2) << endl;
        }
        return 0;
}

//2 4 8 16
//2 4
//2 4 8 16 32 64 

//2 64 4 8 16 32
//2 4 8 16 32 64 128 256