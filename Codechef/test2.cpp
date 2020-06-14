#include <bits/stdc++.h>
using namespace std;

int main() {
        int t;
        cin >> t;
        while (t--) {
                vector<float> initial(3);
                vector<float> final(3);

                for (auto &x : initial) cin >> x;
                for (auto &x : final) cin >> x;
                set<float> prodSet;
                set<float> sumSet;

                for (int i = 0; i < 3; i++) {
                        prodSet.insert(final[i] / initial[i]);
                        sumSet.insert(final[i] - initial[i]);
                }

                int a = 0, b = 0;
                a = prodSet.size();
                b = sumSet.size();
                if (prodSet.find(1.0f) != prodSet.end()) a--;
                if (sumSet.find(0.0f) != sumSet.end()) b--;
                cout << min(a, b) << endl;
        }
        return 0;
}