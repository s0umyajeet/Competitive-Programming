#include <bits/stdc++.h>
#define int long long
#define coutans << "ans: "
using namespace std;

int32_t main() {
        int t = 1;
        //cin >> t;

        while(t--) {
                int n;
                cin >> n;
                vector<int> v(n);
                for (auto &x : v) cin >> x;

                int i = 0;
                int j = n - 1;
                
                int sereja = 0;
                int dima = 0;
                int chance = 0;

                while (chance < n) {
                        if (chance % 2 == 0) {
                                if (v[i] >= v[j]) {
                                        sereja += v[i];
                                        i++;
                                } else {
                                        sereja += v[j];
                                        j--;
                                }                        
                        } else {
                                if (v[i] >= v[j]) {
                                        dima += v[i];
                                        i++;
                                } else {
                                        dima += v[j];
                                        j--;
                                }
                        }
                        chance++;
                }    
                cout << sereja << " " << dima << endl;
        }
}