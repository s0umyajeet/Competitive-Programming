#include <bits/stdc++.h>
using namespace std;

int main() {
        int n;
        cin >> n;

        vector<int> list[n];
        int input = 0;

        for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                        cin >> input;
                        if (input == 1) {
                                list[i].push_back(j + 1);
                        }
                }
        }
        for (int i = 0; i < n; i++) {
                cout << list[i].size() << " ";
                for (int j = 0; j < list[i].size(); j++) {
                        cout << list[i][j] << " ";
                }
                cout << endl;
        }
        return 0;
}