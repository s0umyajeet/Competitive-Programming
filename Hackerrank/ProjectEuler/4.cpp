#include <bits/stdc++.h>
#define int long long
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;

bool checkPalindrome(int n) {
        string s = to_string(n);
        for (int i = 0; i < s.size() / 2; i++) {
                if (s[i] != s[n - 1 - i]) 
                        return false;
        }
        return true;
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	cin >> t;
        vector<int> v;
        for (int i = 999; i >= 100; i--) {
                for (int j = 999; j >= 100; j--) {
                        int prod = i * j;
                        cout << prod << endl;
                        if (checkPalindrome(prod)) {
                                cout << prod << endl;
                                v.push_back(prod);
                        }
                }
        }
        sort(v.begin(), v.end());
        cout << v.size() << endl;
	while (t--) {
                int n;
                cin >> n;
                cout << *lower_bound(v.begin(), v.end(), n) << endl;
        }
	return 0;
}