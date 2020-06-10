#include <bits/stdc++.h>
using namespace std;

int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);

        int t;
        cin >> t;
        for (int i = 0; i < t; i++) {
                int n, d;
                cin >> n >> d;

                int small = 0, big = 0;
                vector<int> sd, bd;
                while (n--) {
                        char c, dash; 
                        int dist;
                        cin >> c >> dash >> dist;
                        if (c == 'S') {
                                small++;
                                sd.push_back(dist);
                        }
                        if (c == 'B') {
                                big++;
                                bd.push_back(dist);
                        }
                }

                if (big == 0) {
                        cout << "Case " << i + 1 << ": " << d << endl;
                        continue;
                } else {
                        int max_jump = -99999;
                        for (int x = 0; x < bd.size(); x++) {
                                if (x == 0) max_jump = bd[0];
                                else max_jump = max(max_jump, bd[x] - bd[x - 1]);
                        }
                        max_jump = max(max_jump, d - bd[bd.size() - 1]);
                        cout << "Case " << i + 1 << ": " << max_jump << endl;
                }
                
        }
}