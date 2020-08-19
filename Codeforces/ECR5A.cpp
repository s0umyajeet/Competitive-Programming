#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;

	while (t--) {
                string a, b;
                cin >> a >> b;
                if (a[0] == '0') 
                        a.erase(a.begin(), find_if(a.begin(), a.end(), [](char c) { return c != '0';}));
                if (b[0] == '0')
                        b.erase(b.begin(), find_if(b.begin(), b.end(), [](char c) { return c != '0';}));
                if (a == b) {
                        cout << "=" << endl;
                } else if (a.size() > b.size()) {
                        cout << ">" << endl;
                } else if (b.size() > a.size()) {
                        cout << "<" << endl;
                } else {
                        for (int i = 0; i < a.size(); i++) {
                                if (a[i] > b[i]) {
                                        cout << ">" << endl;
                                        return 0;
                                } else if (b[i] > a[i]) {
                                        cout << "<" << endl;
                                        return 0;
                                }
                        }
                }
	}
	return 0;
}