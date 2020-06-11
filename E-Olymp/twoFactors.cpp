#include <bits/stdc++.h>
using namespace std;

int main() {
        int k;
        cin >> k;

        vector<int> ways;
        for (int i = 1; i < 45500; i++) {
                int factors = 0;
                for (int j = 1; j <= sqrt(i); j++) {
                        if (i % j == 0) factors += 1;
                }
                ways.push_back(factors);
        }
        //cout << "done" << endl;
        //for (auto x : ways) cout << x << " ";
        // cout << *max_element(ways.begin(), ways.end()) << endl;
        auto itr = find(ways.begin(), ways.end(), k);
        cout << itr - ways.begin() + 1 << endl;
        return 0;
}