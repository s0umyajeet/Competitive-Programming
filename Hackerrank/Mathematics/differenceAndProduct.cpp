#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {
        int t;
        cin >> t;
        while (t--) {
                float d, p;
                cin >> d >> p;
                
                float D = d * d + 4.0f * p;
                float root_1 = (d + sqrt(D)) / 2.0f;
                float root_2 = (-d + sqrt(D)) / 2.0f;
                
                // cout << root_1 << " " << root_2 << endl;
                int count = 0;
                if ((int)root_1 - (float)root_1 == 0) count += 2;
                if ((int)root_2 - (float)root_2 == 0 && root_2 != root_1) count += 2;

                cout << count << endl;        
        }
        return 0;
}