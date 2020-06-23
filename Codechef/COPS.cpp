#include <bits/stdc++.h>
using namespace std;

int main() {
        int t;
        cin >> t;
        while (t--) {
                int m, x, y;
                cin >> m >> x >> y;

                vector<int> houses(101, -1);
                houses[0] = 1;
                vector<int> police(m);
                for (auto &x : police) cin >> x;

                bool gone = false;
                int range = x * y;
                for (int i = 0; i < m; i++) {
                        if (find(houses.begin(), houses.end(), -1) == houses.end()) {
                                gone = true;
                                break;
                        }
                        int left_range = range;
                        int right_range = range;
                        for (int j = police[i] - 1; j > 0; j--)  {
                                if (houses[j] == 1) break;
                                if (left_range == 0) break;                                
                                left_range--;
                                houses[j] = 1;
                        }
                        for (int k = police[i]; k < 101; k++) {
                                if (k == police[i] && houses[k + 1] == 1) break;
                                if (right_range == 0) break;
                                right_range--;
                                houses[k] = 1;
                        }
                }

                if (gone) cout << 0 << endl;
                else cout << count(houses.begin(), houses.end(), -1) << endl;
        }
        return 0;
}
