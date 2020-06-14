#include <bits/stdc++.h>
using namespace std;

int main() {
        int t;
        cin >> t;
        while (t--) {
                vector<int> initial(3);
                vector<int> final(3);

                for (auto &x : initial) cin >> x;
                for (auto &x : final) cin >> x;

                int prod_count = 0;
                int sum_count = 0;

                vector<int> prod(3);
                vector<int> sum(3);
                for (int  i = 0; i < 3; i++) {
                        prod[i] = final[i] / initial[i];
                        sum[i] = final[i] - initial[i];
                }
        }
}