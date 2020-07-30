#include <bits/stdc++.h>
#include <exception>
#define int long long
#define coutans cout << "ans: " //debug
#define endl "\n"
using namespace std;

bool checkNumber(string s) {
        try {
                int x = stoi(s);
        } catch (exception &e) {
                return false;
        }
        return true;
}
int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	// cin >> t;

	while (t--) {
		int n;
                cin >> n;
                vector<string> beverages = {"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};
                int count = 0;
                for (int i = 0; i < n; i++) {
                        string s;
                        cin >> s;
                        if (checkNumber(s)) {
                                if (stoi(s) < 18) count++;
                        } else {
                                if (find(beverages.begin(), beverages.end(), s) != beverages.end())
                                        count++;
                        }
                }
                cout << count << endl;
        }
	return 0;
}