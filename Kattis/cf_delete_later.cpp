#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int sovle(vector<bool> &infected, vector<int> &vel, int curr) {
        infected[curr] = true;
        for (int i = 
int32_t main() {
        int tc = 0;
        cin >> tc;
        for (int tcc = 0; tcc < tc; tcc++) {
                int n;
                cin >> n;
                vector<int> vel(n);
                for (auto &x : vel) cin >> x;
                
                int minScore = 99999999;
                int maxScore = -99999999;
                
                for (int i = 0; i < n; i++) {
                        vector<bool> infected(n + 1, -1);
                        int score = solve(infected, vel, vel[i]);
                        minScore = min(minScore, score);
                        maxScore = max(maxScore, score);
                }

        }
        return 0;
}
                