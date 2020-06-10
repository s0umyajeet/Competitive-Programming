#include <bits/stdc++.h>
using namespace std;

int main() {
        int n;
        cin >> n;
        vector<int> v(2 * n);
        for (auto &x : v) cin >> x;

        sort(v.begin() + 1, v.end());

        int highest = v[0] + v[2 * n - 1];
        int lowest = v[0] + v[1];

        int highRank = 0;
        int lowRank = 0;
        vector<int> maxSumVec, minSumVec;

        for (int i = 2 * n - 2; i >= 2; i -= 2) 
                maxSumVec.push_back(v[i] + v[i - 1]);
        
        maxSumVec.push_back(highest);

        for (int i = 2; i < 2 * n - 1; i += 2)
                minSumVec.push_back(v[i] + v[i + 1]);
        
        minSumVec.push_back(lowest);

        sort(maxSumVec.begin(), maxSumVec.end(), greater<int>());
        sort(minSumVec.begin(), minSumVec.end(), greater<int>());


        for (int i = 0; i < maxSumVec.size(); i++) {
                if (maxSumVec[i] == highest) {
                        highRank = i;
                        break;
                }
        }
 
        for (int i = 0; i < minSumVec.size(); i++) {
                if (minSumVec[i] == lowest) {
                        lowRank = i;
                        break;
                }
        }

        cout << highRank + 1 << " " << lowRank + 1 << endl;
        return 0;

}