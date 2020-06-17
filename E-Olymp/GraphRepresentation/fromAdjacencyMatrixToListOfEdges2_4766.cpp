#include <bits/stdc++.h>
using namespace std;

int main() {
        int n;
        cin >> n;

        int input;
        vector<pair<int, int>> p;
        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        cin >> input;
                        if (input == 1)
                                p.push_back(make_pair(i + 1, j + 1));
                }
        }
        for (int i = 0; i < p.size(); i++) {
                cout << p[i].first << " " << p[i].second << endl;
        }
        return 0;
}