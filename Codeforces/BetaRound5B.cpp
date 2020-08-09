#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

void printSpaces(int n) {
        while (n--) {
                cout << " ";
        }
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;
        vector<string> v;
	while (t--) {
                string s;
                while (getline(cin, s)) v.push_back(s);
                
                int max_len = -999;
                for (int i = 0; i < v.size(); i++) {
                        max_len = max(max_len, (int)v[i].size());
                }
                
                // for (auto x : v) {
                //         cout << "\"" <<  x << "\"" << endl;
                // }
                cout << string(max_len + 2, '*') << endl;
                int alt = 0;
                for (int i = 0; i < (int)v.size(); i ++) {
                        cout << "*";
                        int sample_len = v[i].size();
                        int diff = (max_len - sample_len);
                        if (diff % 2 == 0) {
                                printSpaces(diff / 2);
                                cout << v[i];
                                printSpaces(diff / 2);
                        } else {
                                if (alt % 2 == 0) {
                                        printSpaces(diff / 2);
                                        cout << v[i];
                                        printSpaces(diff / 2 + 1);
                                        alt = 1;
                                } else {
                                        printSpaces(diff / 2 + 1);
                                        cout << v[i];
                                        printSpaces(diff / 2);
                                        alt = 0;
                                }
                        }
                        cout << "*" << endl;
                }
                cout << string(max_len + 2, '*') << endl;               
        }
        return 0;
}