#include <bits/stdc++.h>
#define int long long
using namespace std;

int checkOK (vector<int> &v) {        
        int i = 0;
        int j = v.size() - 1;
        int last = -99999999;

        while (i <= j) {
                if (v[i] <= v[j]) {
                        if (v[i] < last) {
                                return i;
                        }       
                        last = v[i];
                        i++;
                } else {
                        if (v[j] < last) {
                                return j;
                        }
                        last = v[j];
                        j--;
                }
                
        }
}

int32_t main() {
        int t;
        cin >> t;
        while (t--) {
                int n;
                cin >> n;
                vector<int> v(n);
                for (auto &x : v) cin >> x;                
                cout << "ans: " << checkOK(v) << endl;
                
        }
}