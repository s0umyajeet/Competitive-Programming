#include <bits/stdc++.h>
#define int long long
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;

	while (t--) {
                vector<string> months = {"January", "February", "March", "April", 
                                         "May", "June", "July", "August", 
                                         "September", "October", "November", "December"};
                string s;
                cin >> s;
                int k;
                cin >> k;
                auto itr = find(months.begin(), months.end(), s);
                int pos = ((itr - months.begin()) + k) % 12;
                cout << months[pos] << endl;
	}
	return 0;
}