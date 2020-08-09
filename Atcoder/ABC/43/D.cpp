//https://atcoder.jp/contests/abc043/tasks/arc059_b
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"     

bool isUnbalanced(string x) {
        int flag = 0;
        vector<int> arr(26, 0);
        for (int i = 0; i < x.size(); i++) {
                arr[x[i] - 97]++;
        }

        for (int i = 0; i < 26; i++) {
                if (arr[i] > x.size() / 2) {
                        flag = 1;
                }
        }
        if (flag == 1) return true;
        else return false;
}

int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(0);

        string s;
        cin >> s;
        for (int i = 0; i < s.size() - 1; i++) {
                for (int j = i + 1; j < s.size(); j++) {
                        if(isUnbalanced(s.substr(i, j - i + 1))) {
                                cout << i + 1 << " " << j + 1 << endl;
                                return 0;
                        }
                }
        }
        cout << "-1 -1";
        return 0;
}

//xgfreeee